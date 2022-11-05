#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool isMatch(string s, string p) {
    int si=s.size()-1;
    int pi=p.size()-1;
while(1)
{
    if (pi<0||si<0){
        break;
    }
    if (p[pi]=='.'){
         si--;
         pi--;
        continue;
    }
    if (p[pi]=='*'){
        if (p[pi-1]==s[si]){
            si--;
            continue;
        }else{
            pi=pi-2;
            continue;
        }

    }
    if (p[pi]==s[si]){
        pi--;
        si--;
        cout<<si<<endl;
        cout<<pi<<endl;
        continue;
    }else{
        return false;
    }

}
cout<<si<<endl;
if (si!=-1){
 return false;
}
for (int i = pi; i >=0; i=i-2)
{
   if (p[i]!='*') {
    return false;
   }  
}
return true;

}

int main (){
        int d=isMatch("aa","a");
        if (d==1){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
        return 0;
    }


























