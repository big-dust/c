#include<stdio.h>
int main(){
    int n=10;
    int a[2n];
    for (int i = 0; i < 20; i++)
    {
        a[i]=i;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}