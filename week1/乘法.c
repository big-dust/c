#include<stdio.h>
int main (void){
	int i,n ;
   for (i=1;i<=9;i++){
	   for (n=1;n<=9;n++){
         printf("%d*%d=%d ",i,n,i*n);
		 if (n==i){
			 printf("\n");
			 break;
		 }
	   }
   }
   return 0;
}
