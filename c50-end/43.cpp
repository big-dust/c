#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n,a,b,t;
    cin>>m>>n>>a>>b>>t;
    vector<vector<int>> d(m);
    for (int i = 0; i < m; i++)
    {
         for (int j = 0; j < n; j++)
         {
             int f;
             cin>>f;
             if (f>=a&&f<=b){
                f=0;
                d[i].push_back(f);
             }else{
                d[i].push_back(f);
             }
         }
         
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           printf("%03d ",d[i][j]);
           if (j==n-1){
            cout<<endl;
           }
        }
        
    }
    
    
}