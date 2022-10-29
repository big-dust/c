#include<stdio.h>
#define N 10
int main(){
   int a[N];
for (int i = 0; i < N; i++)
{
   scanf("%d",&a[i]);    
}
for (int n = 0; n < N-1; n++)
{
for (int i = 0; i < N-1-n; i++)
{
    if (a[i]>a[i+1]){
        int q =a[i];
        a[i]=a[i+1];
        a[i+1]=q;
    }
}
}
for (int i = 0; i < N; i++)
{
    printf("%d ",a[i]);
}
return 0;
   
}