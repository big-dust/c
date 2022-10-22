#include<stdio.h>
int main(void){
	int m;
	puts("请输入月份：");
	scanf("%d",&m);
	switch(m){
		case 3:printf("春季");break;
		case 6:printf("夏季");break;
		case 9:printf("秋季");break;
		case 1:printf("冬季");break;
	}
	return 0;
}
