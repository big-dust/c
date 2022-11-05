#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    string reverseWords(string s) {
    string s1="";
    int left=0;
    int right;
    while(s[left]=='1'){
     left++;
     if (left>=s.size()){
         return s1;
     }
    }
    right=left;
    while(1){
        cout<<"de"<<endl;
        right=s.find('1',left);
        if (right==-1){
            s1=s.substr(left,s.size())+"1"+s1;
          cout<<"2"<<s1<<endl;
            break;
        }
        s1=s.substr(left,right-left)+"1"+s1;
        cout<<"3"<<s1<<endl;
        left=right;
        while(s[left]=='1'){
            left++;
            if (left>=s.size()){
                break;
            }
        }
        if (left>=s.size()){
            break;
        }
        right=left;
    }
    return s1.substr(0,s1.size()-1);
    }
int main(){
    string s =reverseWords("11hello1world!11");
   // cout<<s<<endl;
    return 0;
}