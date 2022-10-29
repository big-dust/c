#include<stdio.h>
#include<stdlib.h>
int main (){
    int n=0;
    double *a=calloc(100,sizeof(double));
    int ac =0;
    int sn=0;
    
    while(1){
        int sum=0;
        scanf("%d",&n);
        if (n==0){
            break;
        }
        int max=0;
        int min=101;
        for (int i = 0; i <n; i++)
        {
            scanf("%d",&sn);
            sum=sum+sn;
            if (sn>max){
                max=sn;
            }
            if (sn<min){
                min=sn;
            }
        }
        sum=sum-max-min;
        double equal=sum/(n-2.0);
        a[ac++]=equal;
        
    }
    for (int i = 0; i < ac; i++)
    {
     printf("%.2lf\n",a[i]);   
    }
    return 0;
    
}