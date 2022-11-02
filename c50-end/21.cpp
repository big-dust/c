#include<iostream>
#include<vector>
using namespace std;
int a(int n);
int b(int n);
int a(int n){
    if (n==2||n==3){
        return 2;
    }
    int ret=2*a(n-2)+2*b(n-2);
    return ret;
}
int b (int n){
    if (n==1||n==2){
        return 1;
    }
    int ret=a(n-1)+b(n-1);
    return ret;
}
int main(){
    vector<int> d;
    while(1){
    int x;
    cin>>x;
    if (x==0){
        break;
    }
    d.push_back(a(x));
    }
    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<endl;
    }
    return 0;
}
