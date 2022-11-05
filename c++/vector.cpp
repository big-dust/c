#include<iterator>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    static int P(int a){
     return a*a;
    }
    static vector<int> sortedSquares(vector<int> nums) {
    vector<int> a(nums.size());
    int left=0;
    int right=nums.size()-1;
    int i=nums.size()-1;
    while(right>=left){
       if (P(nums[left])>P(nums[right])){
         a[i--]=P(nums[left]);
         left++;
       }else{
        a[i--]=P(nums[right]);
        right++;
       }
    }
    return a;
    }

};
int main(){
  //  vector<int> q{-4,-1,0,3,10};
    //vector<int>c(Solution::sortedSquares(q));
    //vector<int>::iterator v=c.begin();
   // while(c!=c.end()){
      //  cout<<*c<<endl;
    //}
    return 0;
}
