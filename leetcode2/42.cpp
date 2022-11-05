#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int trap(vector<int>& height) {
auto  m = *max_element(height.begin(),height.end());
int v=0;
for (int i = 0; i < m; i++)
{    
    

     for (int j = 0; j < height.size(); j++)
     {
      if (j==0||j==height.size()-1){
        continue;
      }
     if (height[j]<=i){

      int maxleft=*max_element(height.begin(),height.begin()+j);
      int maxright=*max_element(height.begin()+j,height.end());   

      if (maxleft>i&&maxright>i){
       v++;

      }
     }     
     }
}
return v;
}


int main(){
vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
int d=trap(height);
cout<<d<<endl;
return 0;
}