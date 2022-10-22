#include<stdio.h>
int main(void){
	int q,w,e,r;
	puts("请输入四个整数。");
	scanf("%d%d%d%d",&q,&w,&e ,&r);
	int max;
	max=q;
	if (w>max)
		max=w;
	if (e>max)
		max=e;
	if (r>max)
		max=r;
	printf("最大值为：%d",max);
	return 0;

}
