#include<stdio.h>
int main(void){
	int a,b ;
	double c,d ;
	puts("请输入两个整数。");
printf("整数a：");  scanf("%d",&a);
printf("整数b：");  scanf("%d",&b);
 c=(double)a;
 d=(double)b;
 printf("a是b的%f%%",(c/d)*100);
 return 0;
}
