#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){ 
   int e=0;
   int n=0;
   int sum=0;// arr number
   int w=0;
   int  *q=calloc(100,sizeof(int));// put arr length
   int* *k=calloc(100,sizeof(int*));//put arr
   while(1){
   /*if(sum!=0){
   getchar();}*/
   scanf("%d",&n);
   if (n==0){
    break;
   }
   q[w++]=n;
    int *a=calloc(n,sizeof(int));
    //int *a=calloc(n,sizeof(int));
  //  int *b=calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
 
    }
    for (int i = 0; i < n-1; i++)
    {   int max=i;
        for (int m = i; m < n; m++)
        {
            if (abs(a[m])>abs(a[max])){
                max=m;
            }
        }
        int c=a[i];
        a[i]=a[max];
        a[max]=c;
    }
    /*int *d=calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
     d[i]=a[i];
    }*/
    k[e++]=a;
    sum++;
   }
   for (int i = 0; i < sum; i++)
   {
    for (int j = 0; j < q[i]; j++)
    {
     printf("%d ",k[i][j]);
     if (j==q[i]-1){
        printf("\n");
     }   
    }
    
   }
   
   
    return 0;
    
}