#include<stdio.h>
int D(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a){
     if (a==b&&b==c){
        return 1;
     }else{
        if (a==b||b==c||a==c){
            return 2;
        }else{
            return 3;
        }
     }
     
    }else{
        return 0;
    }
    return 0;
}
int main(){
    int w=D();
    printf("%d\n",w);
    return 0;
}