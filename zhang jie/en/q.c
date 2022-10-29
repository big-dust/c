#include<stdio.h>
#include<math.h>
int reverse(int x){
    int q=0;
   if (x<0){
       x=-x;
       q++;
   }
   long sum=0;
   int a=x;
   int c =0;
   while(1){
       if (a!=0){
           c++;
           a=a/10;
       }else{
           break;
       }
   }
   long y=(long)x;
   while(1){
      if(c>0){
          sum=sum+(y%10)*pow(10,c-1);
          y=y/10;
          c--;
      }else{
          break;
      }
   }
   if (q==1){
       sum=-sum;
   }
   printf("%ld",sum);
  // printf("%u  %u\n"-(1u<<31),(1u<<31)-1);
   if (sum<-(1u<<31)||sum>(1u<<31)-1){
    printf("dwa");
       return 0;
   }
   int p=(int)sum;
return p;


}
int main (){
    int a=reverse(123);
    printf("%d\n",a);
    return 0;
}
