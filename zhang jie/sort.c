#include<stdio.h>
#define M 10
int i,j,k,r,a[M];
void main(){
	printf("please input achievement:\n");
	for(i=0;i<M;i++)
    scanf("%d",&(a[i]));
	for(i=0;i<M-1;i++){
        j=i;
		for(k=i+1;k<M;k++)
		if(a[k]<a[j])j=k;
		r=a[i];a[i]=a[j];a[j]=r;
	}
	printf("\nanswer\n");
	for(i=0;i<M;i++){
		if(i%10==0)printf("\n");
		printf("%6d",a[i]);
	}
	printf("\n");
}