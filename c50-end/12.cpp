#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    vector<char> cha;
    for(int i=0;i<n;i++){
        cin>>m;
        cha.push_back(m);
    }
   auto p =cha.begin();
    while(p!=cha.end()){
        cout<<*p;
        p++;
    }
    return 0;
}
