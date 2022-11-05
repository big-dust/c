#include<iostream>
#include<vector>
using namespace std;
  vector<int> exchange(vector<int>& nums) {
     int left=0;
     int right=nums.size()-1;
     while(1){
         if (nums[left]%2!=0){
           left++;
         }
         if (nums[right]%2==0){
             right--;
         }
         if (left>=nums.size()/2||right<nums.size()/2){
             return nums;
         }
         if (nums[right]%2!=0&&nums[left]%2==0){
             int temp=nums[left];
             nums[left]=nums[right];
             nums[right]=temp;
             left++;
             right--;
         }
     }
     return nums;
    }    
    int main(){
        vector<int>a{2,3,1,4};
        vector<int> b=exchange(a);
        for (int i = 0; i < b.size(); i++)
        {
            cout<<b[i]<<endl;
        }
        return 0;

    }