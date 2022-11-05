#include<iostream>
#include<vector>
using namespace std;
    int maxArea(vector<int>& height) {
     int left=0;
     int right=height.size()-1;
     int max=-1;
     while(right>left){
        if (height[left]<height[right]){
           if (max<(right-left)*height[left]){
            max=(right-left)*height[left];
           }
           left++;
        }else{
        if (max<(right-left)*height[right]){
            max=(right-left)*height[right];
        }
        right--;
        }
     }
return max;
    }
    int main(){
       vector<int> a{1,3,2,5,25,24,5};
        int d=maxArea(a);
        cout<<d<<endl;
        return 0;
    }