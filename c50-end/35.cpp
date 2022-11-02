#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<double> a;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        double max=(double)INT_MIN;
        for (int j = 0; j < m; j++)
        {
         double d;
         cin>>d;
         if (d>max){
            max=d;
         }
         

        }
        a.push_back(max);
    }
    for (int i = 0; i < a.size(); i++)
    {
      printf("%.2lf\n",a[i]);
    }
    return 0;
    
}