#include<stdio.h>
int main(){
   char c;
   c=getchar();
   if (c>=97&&c<=122){
   printf("%c",c-32);
   }else{
    printf("%c",c);
   }
   while(1){
    c=getchar();
    if (c=='\0'||c=='\r'||c=='\n') break;
    if (c!=' ') {
    printf("%c",c);
    }else{
    c=getchar();
    if (!((c>=97&&c<=122)||(c>=65&&c<=90))){
        printf(" %c",c);
        continue;
    }
    if (c>=65&&c<=90){
     printf(" %c",c-32); 
     continue;  
    }
    printf(" %c",c-32);
    }
   }
   return 0;
}