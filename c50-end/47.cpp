#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
   map<int,int>m;
    while(n--){
    int a=0;
    int b=0;
    cin>>a>>b;
    m[a]=m[a]+b;
    }
    int maxi=1;
    int maxv=m[1];
  for (int i = 1; i <= m.size(); i++)
  {
     if (m[i]>maxv){
        maxv=m[i];
        maxi=i;
     }     
  }
   cout<<maxi<<" "<<maxv<<endl;
  




    return 0;
}