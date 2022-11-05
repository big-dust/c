#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int>& nums) {
if (nums.size()==1){
    return true;
}
int p=0;
int len=0;
int max=0;
  len=nums[p];
  max=len+p;
  int lastmax=0;
  while(1){
    cout<<"start:"<<max<<endl;
    lastmax=max;
    if (max>=nums.size()-1){
    return true;
    }
    if (max==7)
    cout<<"p+1:"<<p+1<<endl;
  for (int i = p+1; i <= lastmax; i++)
  {
   if (nums[i]+i>max){
    max=nums[i]+i;
   }    
  }
  cout<<"end:"<<max<<endl;
  if (max>lastmax){
   p=lastmax;

  }else{
    break;
  }
}
return false;
}
int main(){
vector<int> a{4,0,4,2,2,0,1,3,3,0,3};
int d=canJump(a);
if (d==1){
    cout<<"true"<<endl;
}else{
    cout<<"false"<<endl;
}
}