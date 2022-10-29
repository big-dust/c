#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int max,min;
    if (a>b){
      max=a;
      min=b;
    }else{
        max=b;
        min=a;
    }
    while(max%min!=0){
        int c=min;
        min=max%min;
        max=c;
    }
    printf("%d",min);
    return min;
}