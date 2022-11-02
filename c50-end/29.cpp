#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cin>>n;
     vector<int> a;
     for (int i = 0; i < n; i++)
     {
        int d;
        cin>>d;
      a.push_back(d);
     }
     for (int i = 0; i < a.size(); i++)
     {
        for (int j = i+1; j < a.size(); j++)
        {
           if (a[i]==a[j]){
            a.erase(a.begin()+j);
           }   
        }
        
     }
     int sum=0;
     for (int i = 0; i < a.size(); i++)
     {
           for (int j = 0; j < a.size(); j++)
           {
            if (i==j){
                continue;
            }
          sum=sum+a[i]*10+a[j];
           }
           
     }
  cout<<sum<<endl;
  return 0;
     



}