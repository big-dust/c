#include<stdio.h>
#include<stdlib.h>
int sum=0;
char Q (char a){
    if (a=='('){
        return ')';
    }
    if (a=='['){
        return ']';
    }
    if (a=='{'){
        return '}';
    }
    return '1';
}
int D(char * s){
    int o =0;
    int g=0;
    int h=0;
    for (int i = 0; i < sum; i++)
    {
        if (Q(s[i])!='1'){
           g++;    
        }
        if (s[i]==')'||s[i]==']'||s[i]=='}'){
            h++;
        }
    }
    if (g!=h){
        return 0;
    }
    for (int i = 0; i < sum; i++)
    {
     if (Q(s[i])!='1'){
        o++;
        if (i==sum-2){
            return 0;
        }
        int t = 0;
        for (int n = i+1; n < sum; n++)
        {    
         if (s[n]==Q(s[i])){
            t++;
            if (n+1==i){
                continue;
            }
            int r=0;
          for (int m = i+1; m <= n-1; m++)
          {
            if (s[m]=='['||s[m]==']'||s[m]=='{'||s[m]=='}'||s[m]=='('||s[m]==')'){
               r++; 
            }    
          }
          if (r==0){
            break;
          }else{
           for (int k = i+1; k <= n-1; k++)
           {
            if (Q(s[k])!='1'){
                int y=0;
                for (int p = k+1; p <= n-1; p++)
                {
                   if(s[p]==Q(s[k])){
                    y++;
                   }
                   
                }
                if (y==0){
                    return 0;
                }
            }
           }  
          }
           break;    
         }
        }
        if (t==0){
            return 0;
         }
     }    
    }
    if (o==0){
        return 0;
    }
    return 1;
}
int main(){
    FILE *a=fopen("huancun.txt","w");
    if (a==NULL){
        return -1;
    }
    char s ;
   while(1){
        s =getchar();
       sum++;
       if (s=='@'){
        break;
       }
       fprintf(a,"%c",s);
   }
   fprintf(a,"%c",'@');
   fclose(a);
   fopen("huancun.txt","r");
   char *q=(char*)malloc(sizeof(char)*sum);
   int w=0;
   while(1){
    char u =fgetc(a);
    if (u==EOF){
        break;
    }
         q[w]=u;
         w++;
   }
   fclose(a);
   printf("q:%s",q);
int x=D(q);
if (x==1)
{
    printf("YES\n");
}else{
    printf("NO\n");
}
   return 0;
}
(()))