#include<stdio.h>
int main(void){
	int a,b,s;
	puts("请输入两个整数");
	scanf("%d%d",&a,&b);
	s=a-b;
    if (s<0){
		s=-s;
	}
	if (s<10||s==10){
		puts("差值小于或等于10");
	}
	if (s>=11){
		puts("差值大于或等于11");
	}
	return 0;
}
