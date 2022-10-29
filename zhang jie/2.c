#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char t ;
    int n=0;
    scanf("%d",&n);
    t=getchar();
    int w [101]={0};       
    //memset(w,0,sizeof(w)); 
    HH:
    char s [5]="";
    int sum=0;
    int d = 0;
    while(1){
        //  the method of scan has two
        // first start
       /* char e[1] ;
        e[0]=getchar();
        if (e[0]=='0'&&d==0){
            
            break;
        }
        if (e[0]==' '){
            w[sum]=atoi(s);
            sum++;
            memset(s,'\0',sizeof(s));
            d=0;
        }else{
           //strcat(s,e);
           s[d]=e[0];
           d++;
           
        }*/
        // first end

   //second start
    scanf("%s",s);
    if (s[0]=='0'){
        break;
    }
    w[sum]=atoi(s);
    sum++;
    memset(s,'\0',sizeof(s));
 //second end
    }
    int c=0;
    for (int i = 0; i < sum; i++)
    {
        for (int m = 0; m < sum ; m++)
        {  
            if (w[i]/w[m]==n && w[i]%w[m]==0){
                c++;
            }   
        }
        
    }
    printf("%d\n",c);
    goto HH;
    return 0;
}