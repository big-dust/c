#include<stdio.h>
int main(void){
		int a;
		do{
		 puts("请输入一个整数。");
	     scanf("%d",&a);
		 if (a==0){
			 puts("该数为0");
		 }else if (a>0){
			 puts("a是正数");
		 }else{
          puts("a是负数");
		 }
        puts( "是否继续 yes···1\no···0");
		scanf("%d",&a);
		}while(a==1);
    return 0;
}
