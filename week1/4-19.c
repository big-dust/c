#include<stdio.h>
int main (void){
	int a,i ;
	puts("请输入一个数");
	scanf("%d",&a);
	int sum=0;
	for (i=1;i<=a;i++){
		if (a%i==0){
			printf("%d",i);
			printf("\n");
           sum++;
		}
	}
    printf("约数有%d个",sum);
	return 0;
}
