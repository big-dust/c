#include<stdio.h>
int main(void){
	int q,w,e ;
	puts("请输入三个整数。");
	printf("整数q："); scanf("%d",&q);
	printf("整数w："); scanf("%d",&w);
	printf("整数e："); scanf("%d",&e);
	int min;
	min=q;
	if (w<min) 
		min=w;
	if (e<min)
		min=e;
printf("最小的数为：%d\n",min);
	return 0;
	
}
