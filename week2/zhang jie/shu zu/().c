#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
int D(char a){
    if (a=='[') return ']';
    if (a=='(') return ')';
    if (a=='{') return '}';
    return 0;

}
int isValid(char * s){
   int n=strlen(s);
   if (n%2!=0){
       return false;
   }
   int *a=calloc(n+1,sizeof(int));
   int top=0;
   for (int i=0;i<n;i++){
       if (D(s[i])){
           a[top]=s[i];
           top++;
           printf("%c",a[top-1]);
       }else{
        printf("%c",s[i]);
        printf("%c",a[top-1]);
           if (s[i]!=D(a[top-1])||top==0){
               return false;
           }
           top--;
       }
   }
   return true;
}
int main(){
    char *s="()";
    int a = isValid(s);
    printf("%d",a);
    return     0;
}