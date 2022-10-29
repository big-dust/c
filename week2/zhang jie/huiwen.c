#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    char *q=(char*)calloc((strlen(s)+1),sizeof(char));
    q[0]=s[0];
    for (int i = 2; i <= strlen(s); i++)
    {    
     
        char *w=(char*)calloc(i+1,sizeof(char));
        for (int n = 0; n <= strlen(s)-i; n++)
        {
            for (int m = n; m <= n+i-1; m++)
            {
                w[m]=s[m];       
            }
         
            if (D(w)==1){
                strncpy(q,w,n+i);
                break;
            }
            
        }
        //free(w);
    }
    return q;
}
    int main (){
    char e []="cbbd";
    char * t;
    t=longestPalindrome(e);
    printf("%s\n",t);
    switch (a)
    {
    case  /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}