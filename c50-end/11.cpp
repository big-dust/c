#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<vector<int>> p;
    while(1){ 
        cin>>n;
     if(n==0){
        break;
     }
        vector<int> a; 
        int j;
    for (int i = 0; i < n; i++)
    {  
        int min;
       int  z;
       cin>>z;
       if (i==0){
        min=z;
        j=i;
       }
       if (z<min){
        min=z;
        j=i;
       }
       a.push_back(z);
    }
    int d=a[j];
    a[j]=a[0];
    a[0]=d;
    p.push_back(a);
}
auto t=p.begin();
while(t!=p.end()){
    auto k=(*t).begin();
    while(k!=(*t).end()){
        cout<<*k<<" ";
        k++;
        if (k==(*t).end()){
            cout<<endl;
        }
    }
    t++;
}


return 0;

}