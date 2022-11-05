#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
//超时。
/*using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> lg;
    map<int,int> st;
    for(int i=0;i<n;i++){
     int a,b,c;
      cin>>a>>b>>c;
        lg[b]=a;
        st[b]=c;
    }
  int m;
  cin>>m;
  for(int i=0;i<m;i++){
      int d;4
3310120150912233 2 4
3310120150912119 4 1
3310120150912126 1 3
3310120150912002 3 2
2
3 4

      cin>>d;
      cout<<lg[d]<<" "<<st[d]<<endl;
  } 
}*/
// 超时 again
int main(){
    int n;
    cin>>n;
    vector<int> lg;
    vector<int> st;
    vector<int> kn;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        lg.push_back(a);
        st.push_back(c);
        kn.push_back(b);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int j;
        cin>>j;
        auto d =find(kn.begin(),kn.end(),j);
        int t=d-kn.begin();
        
        cout<<lg[t]<<" "<<st[t]<<endl;
   }
}