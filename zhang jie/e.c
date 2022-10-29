#include<stdio.h>
void factor(int *a,int *b,int * ret){
    int q,w;
    q=*a;
    w=*b;
    int min;
    if (q>w){
     min=w;
    }else{
        min=q;
    }
    for (int i = 1; i <=min; i++)
    {
     if (q%i==0 && w%i==0){
        *ret=i;
     }   
    }
    
}
void main(){
    int a,b;
    int ret =0;
scanf("%d%d",&a,&b);
factor(&a,&b,&ret);
printf("%d\n",ret);
}