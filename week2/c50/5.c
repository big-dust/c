#include<stdio.h>
int D(int a){
    int sum=0;
   for (int i = 1; i <a; i++)
   {
       if (a%i==0){
        sum++;
       }
   }
   if (sum!=1){
    return 0;
   }
   return 1;
   
}
int main(){
    int c=0;
 for (int i = 1; i <= 100; i++)
 {
    if (D(i)){
        printf("%d ",i);
        c++;
        if (c%5==0){
            printf("\n");
        }
    }
 }
    
}
