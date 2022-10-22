#include<stdio.h>
int main(void){
	int q,w,i;
	double e; 
	q=(190-155)/5+1;
	w=155;
	e=49.50;
	for (i=0;i<q;i++){
		printf("%dcm",w);printf("%.2fkg\n",e);
		w+=5;
		e+=5;
	}
	return 0;
}
