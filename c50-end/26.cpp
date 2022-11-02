#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    
  int a,b;
  vector<int> q;
  vector<int>w;
 q.push_back(1);
 w.push_back(2);
 q.swap(w);
 cout<<q[0]<<" "<<w[0]<<endl;
  cin>>a>>b;
  if (a<b){
  swap(a,b);
  }
  int pre =a;
  int ret =a;
  while(1){
   if (pre%b==0){
      ret=pre;
      break;
   }else{
    pre=pre+a;
   }
   
  }
  cout<<ret<<endl;
  return 0; 
}