#include<stdio.h>
int main(void){
	int a,i ;
	puts("请输入一个数");
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		printf("*");
		if (i%5==0){
			printf("\n");
		}
		if (i==a&&i%5!=0){
			printf("\n");
		}
	}
	return 0;
}
