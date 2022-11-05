#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
   static int lengthOfLongestSubstring(string s) {
    if (s.size()==1){
        return 1;
    }
    int left=0;             //pwwekw
    int right=0;
    int mv=1;
    int maxlen=0;
    while(1){
      if (s.find(s[mv],left)==mv){
          right++;
          mv++;
      if (mv>s.size()-1){
          if (right-left+1>maxlen){
              maxlen=right-left+1;
          }
          break;
      }
      }else{
          if (right-left+1>maxlen){
          maxlen=right-left+1;}
         left=s.find(s[mv],left)+1;
         if (left>right){
            right=left;
         }
         mv++;  
         if (mv>s.size()-1){
             break;
         }

      }
      cout<<maxlen<<endl;
    }
    return maxlen;
    }
};
int main(){
  int result=Solution::lengthOfLongestSubstring("pwwekw");
  cout<<result<<endl;
  return 0;
}