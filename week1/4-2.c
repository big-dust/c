#include<stdio.h>
int main(void){
	int q,w ;
	puts("请输入两个整数。");
	scanf("%d%d",&q,&w);
	int a,b ;
	if (q>w){
		a=w;
		b=q;
	}else{
		a=q;
		b=w;
	}
	int sum=0;
	do{
     sum=sum+a;
	 a=a+1;
	} while(a<=b);
	printf("sum:%d\n",sum);
	return 0;
}
