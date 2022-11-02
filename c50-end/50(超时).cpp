#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int TOL;
bool C(int a,int b){
    return abs(a-b)>TOL;
}
bool D(vector<vector<unsigned int>> a,int m, int n);
int main(){
    int m,n;
    cin>>m>>n>>TOL;
      vector<vector<unsigned int>> z;
      vector<int> x;
      vector<int> y;
    for (int i = 0; i < n; i++)
    {   vector<unsigned int> k;
        for (int j = 0; j < m; j++)
        {  int a;
           cin>> a;
           k.push_back(a);
        }
        z.push_back(k);
    }
    vector<int> right;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
         if (D(z,i,j)){
            x.push_back(i);
            y.push_back(j);         
            right.push_back(z[i][j]);
         }                   
        }
        
    }

    vector<int> g(right.size());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
         for (int o = 0; o < right.size(); o++)
         {
              if (right[o]==z[i][j]){
                g[o]=g[o]+1;
              }
         }
                
        }
        
    }
    int xx;
    int yy;
    vector<unsigned int> h;
    for (int i = 0; i < right.size(); i++)
    {
        if (g[i]==1){
          xx=x[i];
          yy=y[i];
          h.push_back(right[i]);  
        }
    }
    if (h.size()>1){
        cout<<"Not Unique"<<endl;
    }
    if (h.size()==0){
        cout<<"Not Exist"<<endl;
    }
    if (h.size()==1){
        cout<<"("<<yy+1<<","<<xx+1<<"):"<<h[0]<<endl;
    }
    return 0;
    
    
}
bool D(vector<vector<unsigned int>> a,int m, int n){
    int h=a.size();  int l=a[0].size();
    if (m==0&&n==0){
      if (C(a[0][0],a[0][1])&&C(a[1][1],a[0][0])&&C(a[0][0],a[1][0])){
        return true;
      }else{
        return false;
      }
    }
    if (m==0&&n==l-1){
       if (C(a[0][l-1],a[0][l-2])&&C(a[1][l-1],a[m][n])&&C(a[1][l-2],a[m][n])){
        return true;
       }else{
        return false;
       }
    }
    if (m==h-1&&n==0){
        if (C(a[m][n],a[m-1][n])&&C(a[m-1][n+1],a[m][n])&&C(a[m][n],a[m][n+1])){
            return true;
        }else{
            return false;
        }
    }
    if (m==h-1&&n==l-1){
      if (C(a[m][n],a[m-1][n])&&C(a[m][n],a[m-1][n-1])&&C(a[m][n],a[m][n-1])){
        return true;
      }else{
        return false;
      }
    }   
    if (m==0&&n!=0&&n!=l-1){
     if (C(a[m][n],a[m+1][n])&&C(a[m][n],a[m][n-1])&&C(a[m][n],a[m][n+1])&&C(a[m][n],a[m+1][n-1])&&C(a[m][n],a[m+1][n+1])){
        return true;
     }else{
        return false;
     }
    }
    if (m==h-1&&n!=0&&n!=l-1){
    if (C(a[m][n],a[m-1][n])&&C(a[m][n],a[m][n-1])&&C(a[m][n],a[m][n+1])&&C(a[m][n],a[m-1][n-1])&&C(a[m][n],a[m-1][n+1])){
        return true;
    }else{
        return false;
    }
    }
    if (n==0&&m!=0&&m!=h-1){
    if (C(a[m][n],a[m+1][n])&&C(a[m][n],a[m-1][n])&&C(a[m][n],a[m-1][n+1])&&C(a[m][n],a[m+1][n+1])&&C(a[m][n],a[m][n+1])){
        return true;
    }else{
        return false;
    }
    }
    if (n==l-1&&m!=0&&m!=h-1){
 if (C(a[m][n],a[m+1][n])&&C(a[m][n],a[m-1][n])&&C(a[m][n],a[m-1][n-1])&&C(a[m][n],a[m+1][n-1])&&C(a[m][n],a[m][n-1])){
        return true;
    }else{
        return false;
    }
    }
    if (C(a[m][n],a[m+1][n])&&C(a[m][n],a[m-1][n])&&C(a[m][n],a[m-1][n-1])&&C(a[m][n],a[m+1][n-1])&&C(a[m][n],a[m][n-1])&&C(a[m][n],a[m+1][n+1])&&C(a[m][n],a[m][n+1])
    &&C(a[m][n],a[m][n+1])){
        return true;
    }else{
        return false;
    }
}