#include<stdio.h>
int main(void){
	int a ;
	int i ;
	puts("请输入一个整数");
	scanf("%d",&a);
	for (i=1;i<=a;i+=2){
	  printf("%d ",i);
	}
	return 0;
}
