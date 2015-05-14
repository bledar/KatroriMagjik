#include<stdio.h>
#include<conio.h>

int main() {
   int n = 2;
   int matric[2][2];
   int shuma1=0;
   int shuma2=0;
   bool uGjet=false;

   printf("\n Jepni numrat e matrices: %d",n*n);
   printf("\n ----------------------------\n");

//ne kete cikel lexohet numrat e dhene nga perdoruesi
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
         scanf("%d", &matric[i][j]);

   }

   //ne kete cikel shfaqet matrica e dhene!

   printf("\n ----------------------------\n");
   printf("Matrica e dhe eshte : \n");

   for (int i = 0; i < n; i++) {
      printf("\n");
      for (int j = 0; j < n; j++) {
         printf("\t%d", matric[i][j]);
      }
   }

//llogaritet shuma e diagonales se pare!

   for (int i = 0; i < n; i++){

	   for (int j = 0; j < n; j++){
	   		if (i==j){

	   			shuma1=shuma1+matric[i][j];
	   		}


	   }
   }
   //llogaritet shuma e diagonales se dyte!

   for (int i = 0; i < n; i++){

	   for (int j = 0; j < n; j++){
	   		if ((i+j)==(n-1)){

	   			shuma2=shuma2+matric[i][j];
	   		}


	   }
   }

printf("\n\n########################################\n");
printf("Shuma diagonales se pare eshte:%d",shuma1);
printf("\n----------------------------------------");
printf("\nShuma diagonales se dyte eshte:%d",shuma2);
printf("\n########################################\n");

//NQS SHUMAT JANE TE BARABARTA ATEHERE MATRICA ESHTE MAGJIKE
if(shuma1==shuma2){
printf("\n\n *****Matrica eshte Katrore Magjik*****\n");

}else{
	printf("\n\n          NUK ESHTE KATRORE MAGJIK!\n");

}

scanf("%s");
   return 0;
}