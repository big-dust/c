#include<stdio.h>
int main(void){
	puts("请输入一个整数");
	int a ;
	scanf("%d",&a);
	int i=2;
	int w,q ;
	
	while(i<a){
       q=i;
	 w=0;
       while(i%2==0){
		   i=i/2;
		   if (i==1){
			  w++ ;
		   }
	   }
	   if (w!=0){
		   printf("%d",q);
		   printf("\n");
	   }
	   q++;
	   i=q;

	}
	return 0;
}
