#include<stdio.h>
int main(){
   for (int i = 5; i >=1; i=i-2)
   {
    for (int n = 0; n < (5-i)/2; n++)
    {
        printf(" ");
    }
    for (int m = 0; m < i; m++)
    {
     printf("*");
     if (m==i-1){
        printf("\n");
     }   
    }
    
   }
   for (int i = 3; i <= 5; i=i+2)
   {
        for (int n = 0; n < (5-i)/2; n++)
        {
            printf(" ");
        }
        for (int m = 0; m < i; m++)
        {
            printf("*");
            if (m==i-1){
                printf("\n");
            }
        }
        
        
   }
   return 0;
   
}