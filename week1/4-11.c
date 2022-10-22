#include<stdio.h>
int main(void){
	int a;
	do{
		puts("请输入一个整数");
		scanf("%d",&a);
		if (a<=0){
			printf("请重新输入");
			
		}
	}while(a<=0);
	printf("%d的逆向整数是:",a);
	while(a>0){
		printf("%d",a%10);
		a=a/10;
	}
	return 0;

}
