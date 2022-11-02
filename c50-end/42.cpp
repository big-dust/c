#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> d;
    string s1="QWERTYUIOPASDFGHJKLZXCVBNM";
    string s2="qwertyuiopasdfghjklzxcvbnm";
    string s3="0123456789";
    string s4="~!@#$%^";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s; 
        int q1=0;
        int q2=0;
        int q3=0;
        int q4=0;
        if (s.size()<8||s.size()>16){
            d.push_back("NO");
            continue;
        }
        for (unsigned int j = 0; j < s.size(); j++)
        {
            if (s1.find(s[j])!=-1&&q1==0){
               q1++;
            }
            if (s2.find(s[j])!=-1&&q2==0){
                q2++;
            }
            if (s3.find(s[j])!=-1&&q3==0){
                q3++;
            }
            if (s4.find(s[j])!=-1&&q4==0){
                q4++;
            }
        }
        int sum=q1+q2+q3+q4;
        if (sum>=3){
            d.push_back("YES");
        }else{
            d.push_back("NO");
        }
    }
    for (unsigned int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<endl;
    }
    
    return 0;
}