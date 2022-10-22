#include<stdio.h>
int main(void){
	int a;
	puts("请输入一个数。");
	scanf("%d",&a);
	while(a<0){
		printf("%d  ",a);
		a++;
	}
	printf("\n");
	printf("%d\n",a);
	return 0;
}
