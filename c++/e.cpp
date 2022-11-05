#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
/// @brief 
class Solution {
public:
   static int threeSumClosest(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
     int sum=0;
    int min=abs(nums[0]+nums[1]+nums[2]-target);
     for (int i=0;i<nums.size()-2;i++){
          int le=i+1;
          int ri=nums.size()-1;
          sum=nums[i]+nums[le]+nums[ri];
          while(ri>le){
              /*vector<int> az;
              vector<int> aj;
              map<int int>m;
              m[abs(sum)]=i;
              az.push_back(sum);
              aj.push_back(abs(sum));
              sort(aj,aj+aj.size());*/
              if (sum==target){
                  return 0;
              }
              int det=abs(sum-target);
              if (det<min){
                  min=det;
              }
              if (sum<target){
                  
                   le++;
              }else{
                   ri--;
              }
              
          }
     }
     return min;
    }
};
int main(){
    int x[]={-1,2,1,-4};
    vector<int> arr(x,x+4);
    int d=Solution::threeSumClosest(arr,1);
    cout<<d<<endl;
    return 0;
}