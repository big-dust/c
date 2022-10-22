#include<stdio.h>
int main(void){
	puts("请输入一个整数");
	int m ;
	scanf("%d",&m);
	int i=2;
	while(i<=m){
		if (i%2==0){
        printf("%d ",i);
		}
		i++;
	}
	return 0;
}
