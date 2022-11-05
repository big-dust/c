#include<iostream>
#include<string>
#include<vector>
using namespace std;
    int translateNum(int num) {
    string s=to_string(num);
    int n=s.size();
    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    string s1;
    for (int i = 2; i <= n; i++)
    {   s1="";
       s1=s1+s[i-2]+s[i-1];
       int d=stoi(s1);
       cout<<d<<endl;
       if (d>=10&&d<=25){
        a.push_back(a[i-1]+a[i-2]);
       }else{
        a.push_back(a[i-1]);
       }
    }
return a[n];    
    }

int main(){
    int p=translateNum(123);
    cout<<p<<endl;
    return 0;
}