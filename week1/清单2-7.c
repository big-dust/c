#include<stdio.h>
int main(void){
	double a,b ;
	puts("请输入两个数");
	scanf("%lf%lf",&a,&b);
	printf("和为：%f\n 差为：%f\n,积为：%f\n,商为：%f\n",a+b,a-b,a*b,a/b);
	return 0;
}
