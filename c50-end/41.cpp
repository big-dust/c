#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> m;
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        s[i]=tolower(s[i]); 
    }
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]=m[s[i]]+1;
    }
    char r='a';
    int  max=0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (m[i]>max){
            max=m[i];
            r=i;
        }else{
            if (m[i]==max){
                if (i<r){
                 r=i;
                }
            }
        }
    }
    cout<<r<<" "<<max<<endl;
    return 0;
    
}