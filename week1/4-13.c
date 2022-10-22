#include<stdio.h>
int main(void){
	int i ;
	int sum=0;
	int n ;
	puts("请输入一个数");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
      sum+=i;
	}
	printf("%d\n",sum);
	return sum;
}
