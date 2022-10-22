#include<stdio.h>
int main(void){
	int a;
	double b;
	puts("请输入您的身高：");
	scanf("%d",&a);
	b=(a-100)*0.9;
	printf("您的标准体重：%.1f",b);
	return 0;
}
