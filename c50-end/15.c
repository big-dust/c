#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char *c=calloc(n+1,sizeof(char));
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&c[i]);   
    }
    c[n]='\0';
    printf("%s",c);
    return 0;
}