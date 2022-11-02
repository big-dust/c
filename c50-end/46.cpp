#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int D(int a){
    int g=0;
    int sum=0;
    while(1){
     g=a%10;
     sum=sum+g;
     a=a/10;
     if (a==0){
        break;
     }
    }
    return sum;
}
int main(){
   int n;
   cin>>n;
   int m;
   vector<int> a;
   while(n--){
    cin>>m;
    int d=D(m);
    a.push_back(d);
   }
  for (int i = 0; i < a.size()-1; i++)
  {  if (a[i]==-1){
    continue;
  }
     for (int j = i+1; j < a.size(); j++)
     {
          if (a[i]==a[j]){
            a[j]=-1;
          }
     }    
  }
  vector<int> b;
  for (int i = 0; i < a.size(); i++)
  {
     if (a[i]!=-1){
      b.push_back(a[i]);  
     }
  }
  cout<<b.size()<<endl;
  sort(b.begin(),b.end());
  for (int i = 0; i < b.size(); i++)
  {
     cout<<b[i];
     if (i!=b.size()-1){
        cout<<" ";
     }
     if (i==b.size()-1){
        cout<<endl;
     }

  }
  
   


}