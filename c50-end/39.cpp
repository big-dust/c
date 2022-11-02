#include<iostream>
#include<vector>
using namespace std;
int D(int a){
    int q[6]={100,50,10,5,2,1};
    int ret=0;
    for (int i = 0; i < 6; i++)
    {
       if (a>=q[i]){
        ret=i;
        break;
       }   
    }
     int num=0;
     int b=a;
    for (int i = ret; i <6 ; i++)
    {
     a=a%q[i];
     num=num+(b-a)/q[i];
     b=a;
    }
    return num;   
}
int main (){
    vector<int> a;
    while(1){
        int n;
        cin>>n;
        if (n==0){
            break;
        }
        cout<<D(1)<<" "<<D(2)<<" "<<D(3)<<endl;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
         int d;
         cin>>d;
         sum=sum+D(d);

        }
        a.push_back(sum);
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}