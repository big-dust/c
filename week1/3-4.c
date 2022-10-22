#include<stdio.h>
int main(void){
	int A,B ;
	printf("请输入两个整数。");
	scanf("%d%d",&A,&B);
	if (A>B)
		puts("A大于B");
	else if (A==B)
		puts("A等于B");
	else
		puts("A小于B");
	return 0;
}
