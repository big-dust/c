#include<stdio.h>
int main(void){
	int q,w;
	puts("请输入两个数");
	scanf("%d%d",&q,&w);
	int s ;
	if (q>w)
     s=q-w;
	else
	s=w-q;
	printf("%d",s);
	return 0;
}
