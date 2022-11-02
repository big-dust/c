#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<cstring>
using namespace std;
int main(){
    vector<int> z{0,1,2,3,4,5,6,7,8,9,10};
    vector<char> m{'1','0','X','9','8','7','6','5','4','3','2'};
    vector<int> q{7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    map<int,char> p;
    for (unsigned int i = 0; i < z.size(); i++)
    { 
       p[z[i]]=m[i];   
    }
    int n;
    cin>>n;
    vector<string> cun;
    string s,s1;
    int d;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        s="";
        cin>>s;
       int l =0;
      for (int k = 0; k < s.size(); k++)
      {
          if (s[k]>57||s[k]<48){
           l++;
          } 
      }
     if (l!=0){
        cun.push_back(s);
        continue;
      }
        for ( int j = 0; j <17 ; j++)
        {    s1="";
             s1=s1+s[j];
             d=stoi(s1,0,1);
             sum=sum+d*q[j];
        }
           sum=sum%11;
        if(p[sum]!=s[17]){
           cun.push_back(s);
        }
    }
    if (cun.size()==0){
        cout<<"All passed"<<endl;
    }else{
        for (unsigned int i = 0; i < cun.size(); i++)
        {
             cout<<cun[i];
             if (i!=cun.size()-1){
             cout<<endl;
             }
        }
 
    }
    return 0;
}