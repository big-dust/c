#include<stdio.h>
int main(void){
	int a;
	do{
		puts("请输入一个正整数");
		scanf("%d",&a);
		if (a<=0){
			puts("请重新输入");
		}
	}while(a<=0);
	printf("%d的位数是:",a);
	int sum=0;
	while(a>0){
    sum++;
		a=a/10;
	}
	printf("%d",sum);
	return 0;
}
