#include<stdio.h>
int main (void){
	int a;
	puts("请输入一个整数：");
	scanf("%d",&a);
	int i=1;
	while(i<=a){
		printf("*");
	    printf("\n");
		i++;
	}
	return 0;
}
