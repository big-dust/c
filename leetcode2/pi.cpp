#include<stdio.h>
 double jiec( double a){
    if (a==1.0){
        return 1.0;
    }
    return a*jiec(a-1);
}
 double sum( double a){
    if (a==1) return 1.0;
    return (2*a-1)*sum(a-1);
}
int main(){
   double eps ;
    scanf("%le",&eps);
    double m=1.0;
    double n=2.0;
    double res=0.0; 
    double pre=1.0;
    res=pre+res;
    if (pre<eps){
      return res;
    }
    while(1){ 
      pre = jiec(m)/sum(n);
      res=res+pre;
      if (pre<eps) break;
      m=m+1.0;
      n=n+1.0;
    }
   printf("PI = %.5lf",2*res);
   return 0;
}