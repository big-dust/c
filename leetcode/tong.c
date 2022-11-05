#include<stdio.h>
#include<stdlib.h>
int* D (int *a,int length){
int *s=(int*)calloc(length,sizeof(int));
for (int i = 0; i < length; i++)
{
   s[i]=a[i];   
}
 return s; 
}

int main(){
int d[]={1,2,3,4,5,6,7,8,9};
int * x=D(d,sizeof(d)/sizeof(int));    
for (int i = 0; i < 9; i++)
{
    printf("%d \n",x[i]);
}
return 0;
printf("%ld\n",sizeof(d)/sizeof(int));
}