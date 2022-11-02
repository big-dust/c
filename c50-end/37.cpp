#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,string> lg;
    map<int,int> st;
    for(int i=0;i<n;i++){
     int b,c;
     string a;
      cin>>a>>b>>c;
        lg[b]=a;
        st[b]=c;
    }
  int m;
  cin>>m;
  for(int i=0;i<m;i++){
      int d;
      cin>>d;
      cout<<lg[d]<<" "<<st[d]<<endl;
  } 
}
