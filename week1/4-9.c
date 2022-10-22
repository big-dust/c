#include<stdio.h>
int main(void){
	puts("输入的整数为：");
	int a; 
	scanf("%d",&a);
	int i =1;
	while (i<=a){
      if (i%2!=0){
		  printf("+");
	  }else{
      printf("-");
	  }
	  i++;
	}
	return 0;
}
