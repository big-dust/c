#include <iostream>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
   static int swapl(int& a, int &b){
       
     
        int x=a;
        a=b;
        b=x;
        return 0;
    }
};
 
int main()
{
    vector<int> a(10,2);
       a[9]=0;
       sort(a.begin(),a.end());  
   cout<<a[0]<<endl;
  int q=1;
  int w=2;
  Solution::swapl(q,w);
  cout<<q<<endl<<w<<endl;
 
   return 0;
}
