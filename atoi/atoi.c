#include<stdio.h>
#include<math.h>
#include<string.h>
int myAtoi(char * s){
    int i =0;
    while(s[i]<48 || s[i]>57){
         i++;
         if (i>=strlen(s)){
            return 0;
         }
    }       
    int a=0;
    int b=i;
    if (b>0){
        a=i-1;
    }else{
     goto HH;
    }
 
 printf("%c",s[b-1]);
    for (int n=0;n<b;n++){
        if (s[n]!=' '){
            if (n==b-1){
            if (s[n]!='-' && s[n]!='+'){        
                            printf("d\n");
             return 0;
     
            
            }
            }else{ 
   
              return 0;
    
            }
        }
    }   
  HH:
    while(s[i]>=48 && s[i]<=57 ){
     i++;
     
    }
    
    int c=i-1;
    for (int m=b;m<=c;m++){
        if (s[m]!='0'){
            b=m;
            break;
        }
    }
    long long p=0;
    int x=c-b+1; 
     if (x>=11&&s[a]!='-'){
        printf("wda\n");
        return (1u<<31)-1;
    }
    if (x>=11&& s[a]=='-'){
        printf("long");
        return -(1u<<31);
    }
    for (int m=b;m<=c;m++){
        p=(s[m]-48)*pow(10,x-1)+p; 
        printf("p:%lld\n",p);
        x--;
    }
    if (s[a]=='-'){
      
        p=p-2*p;   
          
    }
    
     if (-p>1u<<31){
        printf("l:%lld\n",p);
        
         return -(1u<<31);
     }
     if(p>(1u<<31)-1){
         return (1u<<31)-1 ;
     }
    printf("%lld",p);
 
    return p;
       

}
int main(){
    char *s="21474836460";

    int r=myAtoi(s);
    int f=strlen(s);
    printf("r%d\n",r);
    printf("f%d\n",f);
    return 0;
}