#include<stdio.h>
int main(void){
	puts("请输入三个整数");
	int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   int sum;
   sum=0;
   if  (a==b){
    sum++;
   }
   if (a==c){
	   sum++;
   }
   if (b==c){
	   sum++;
   }
   if (sum==0){
   puts("三个数都不相同");
   }else if (sum==1){
	   puts("有两个数相同");
   }else{
	   puts("三数相同");
   }
   return 0;
}
