#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double max=(double)INT_MIN;
    for (int i = 0; i < ; i++)
    {
        double s,x;
        cin>>s>>x;
        double sum=0;
        sum=x*x+s*s;
        double k=pow(sum,1.0/2);
        if (k>max){
            max=k;
        }
    }
    printf("%.2lf",max);
    return 0;
    
}