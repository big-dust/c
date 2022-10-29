#include<stdio.h>
#include<stdlib.h>
int main(){
   int n;
   scanf("%d",&n);
   int *a=calloc(n,sizeof(int));
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&a[i]);
   }
   int d=0 ;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0){
            for (int j = i; j < n-1; j++)
            {
                if (a[j+1]!=0){
                a[i]=a[j+1];
                a[j+1]=0;
                break; 
                }else{
                   continue;
                }

            }
            
        }
    }
   for (int i = 0; i < n; i++)
   {
      printf("%d ",a[i]);
   }
    return 0;      



}