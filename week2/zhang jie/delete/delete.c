#include<stdio.h>
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int *a=calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    int c =0;
    for (int i = 0; i < n; i++)
    {
        for (int m = i+1; m <n-sum+1; m++)
        {
           if (a[i]==a[m]){
           c=a[m];
           a[m]=a[n-1-sum];
           sum++;
           a[n-1-sum]=c;       
           }   
        }
        
    }
    for (int i = 0; i < n-sum; i++)
    {
         printf("%d ",a[i]);   
    }
 return 0;   
    
    
}