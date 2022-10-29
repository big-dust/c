#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int D(char *s){
    int len=0;
    len=strlen(s);
    if (len==2 && s[0]!=s[1]){
        return 0;
    }
    if (len>=3){
      if (len%2==0){
          for (int i=0;i<len/2;i++){
              if (s[i]!=s[len-1-i]){
                  return 0;
              }
          }
      }else{
          for (int i=0;i<(len+1)/2-1;i++){
           if (s[i]!=s[len-1-i]){
               return 0;
           }
          }
      }
    }
    return 1;
    }
char * longestPalindrome(char * s){
    if (strlen(s)==1){
        return s;
    }
    char *q=(char*)malloc((strlen(s)+1)*sizeof(char));
    /*char c [2];
    c[0]=s[0];
    strcpy(q,c);*/
    q[0]=s[0];
    for (int i=0;i<strlen(s);i++){
        for (int n=i+1;n<strlen(s);n++){
          
         char *y  =malloc(sizeof(char)*(n-i+1+1));
         int j =0;
         for (int m=i;m<=n;m++){
             y[j]=s[m];
             j++;
         }
         y[n-i+1]='\0';
         /*for (int i = 0; i < n-i+1; i++)
         {
            printf("%c ",y[i]);
            if (n==n-i){
                printf("\n");
            }
         }*/

         if (D(y)==1){
           //strncpy(q,y,n-i+1);
           for (int d = 0; d < n-i+1; d++)
           {
            q[d]=y[d];
           }
         }
          free(y);
        }
    }
    
    /*char *p =malloc(sizeof(char)*(strlen(q)+1));
    int i=0;
    for (i=0;i<strlen(q);i++){
        p[i]=q[i];
    }
    p[i]='\0';*/
    return q;
}
int main (){
    char e []="cccccccc";
    char * t;
    t=longestPalindrome(e);
    printf("%s\n",t);
    return 0;
}