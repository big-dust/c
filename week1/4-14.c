#include<stdio.h>
int main(void){
	int a ,i;
	puts("请输入一个整数");
	scanf("%d",&a);
	for (i=1;i<=a;i++){
      printf("%d",i%10);
	}
	return 0;
}
