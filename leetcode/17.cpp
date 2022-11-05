#include<iostream>
#include<vector>
#include<map>
using namespace std;
    vector<string> letterCombinations(string digits) {
     vector<string> s1{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     map<char,int> m;
     int j=0;
     for (char i = '2'; i <='9'; i++)
     {
         m[i]=j;
         j++;
     }
   vector<string> ret;
   int k=0;
   string s;
   while(s1[m[digits[0]]][k]!='\0'){
    s=s1[m[digits[0]]][k];
    ret.push_back(s);
    k++;
   }
for (int i = 1; i <= digits.size()-1; i++)
{    int u=s1[m[digits[i]]].size();
     vector<string> pre;
     for (int d = 0; d < ret.size(); d++)
     {
        for (int n = 0; n < u; n++)
        {   
              s=ret[d]+s1[m[digits[i]]][n];
              cout<<s<<endl;
              pre.push_back(s);
        }
        
     }
     ret=pre;
}
return ret;
    }
int main(){
vector<string>s =letterCombinations("23");
for (int i = 0; i < s.size(); i++)
{
    cout<<s[i]<<endl;
}

return 0;

}