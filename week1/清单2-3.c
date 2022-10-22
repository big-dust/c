#include<stdio.h>
int main(void){
	int a ;
	printf("请输入一个整数：\n");
	scanf("%d",&a);
	printf("整数的最后一位是：%d",a%10);
	return 0;
}
