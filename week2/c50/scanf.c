#include<stdio.h>
#include<string.h>
int main(){
   char a[10]="";
   scanf("%s",a);
   a[7]='\n';
   printf("%d",strlen(a));
   return 0;
}