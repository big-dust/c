#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main () {
    //char *a=(char*)calloc(10,sizeof(char));
    int r,t=0;
    printf("%d  %d \n",r,t);
    char *a=(char*)malloc(sizeof(char)*10);
    char q[2];
    q[0]='q';
    q[1]='w';
    strcpy(a,q);
    printf("%d\n",&a[1]);
    printf("%d\n",&q[1]);
    free(a);
    return 0;
}