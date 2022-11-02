#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string s1,s2,s3;
  cin>>s1>>s2;
  char c;
  for (unsigned int i = 0; i < s1.size(); i++)
  {     c=toupper(s1[i]);
        if (s2.find(s1[i],0)==-1&&s3.find(c,0)==-1){
             s3=s3+ c;
        }
  }
  cout<<s3<<endl;
  return 0;

}