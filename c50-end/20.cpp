#include<iostream>
#include<math.h>
using namespace std;
double D(int a){
    double sum=0;
    for (int i = 1; i <= a; i++)
    {
     sum=sum+(1.0/i)*pow(-1.0,i+1.0);     
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        printf("%.2lf\n",D(m));         
    }
    return 0;
}