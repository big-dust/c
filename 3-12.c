#include<stdio.h>
int main(void){
int no;
printf("请输入一个数。");
scanf("%d",&no);
switch (no%2){
	case 0: printf("偶数");break;
	default:printf("奇数");break;
}
return 0;
}
