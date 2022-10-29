#include<stdio.h>
#define N 10
int main (){
   int a[N];
   int n;
   for (int i = 0; i < N; i++)
   {
      scanf("%d",&n);
      a[i]=n;
   }
    for (int i = 0; i < N; i++)
    {
        int q=i;
        for (int m = i; m < N; m++)
        {
         if (a[m]<a[q]){
          q=m;
         }   
        }
        int e =a[i];
        a[i]=a[q];
        a[q]=e;        
    }
    for (int i = 0; i < N; i++)
    {
     printf("%d ",a[i]);   
    }
    return 0;
    
}