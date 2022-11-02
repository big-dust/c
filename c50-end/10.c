#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    int m=0;
    int* *as=calloc(100,sizeof(int*));
    int sc=0;
    while(1){
        scanf("%d%d",n,m);
        int *an=calloc(n,sizeof(int));
        int *am=calloc(m,sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&an[i]);
        }
        
        for (int i = 0; i < n-1; i++)
        {
            int max=i;
           for (int j = i; j < n; j++)
           {
              if (an[j]>an[max]){
                max=j;
              } 
           }
           int c=an[i];
           a[i]=a[max];
           a[max]=a[i];
        }
        if (m>n){
            as[sc++]=an;
            continue;
        }
        
        
    }
}