#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
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
      int d;
      cin>>d;
      cout<<lg[d]<<" "<<st[d]<<endl;
  } 
}*/
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
        int index=kn
        cout<<lg[index]<<" "<<st[index]<<endl;
    }
}

