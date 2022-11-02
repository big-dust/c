#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a<=100&&b<=100){
    if (a>=60&&b>=60){
        printf("it is pass.\n");
    }else{
        printf("it is not pass.\n");
    }
    


    }else{
        printf("it is error.\n");
    }
    return 0;
}