#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    int *a=calloc(100,sizeof(int));
    int c=0;
    while(1){
    scanf("%d",&n);
    if (n==0){
        break;
    }
    int ji=1 ;
    int q=0;
    
     //printf 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&q);
        if (q%2!=0){
            ji=ji*q;       
        }       
    }
    a[c++]=ji;}
    for (int i = 0; i <c; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
}