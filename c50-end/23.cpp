#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
     char c;
     map<char,int> m;
    while(1){
        c=getchar();
        if (c=='\r'||c=='\n'){
            break;
        }
        m[c]=m[c]+1;
    }
    int j=0;
     for (char i = '0'; i <= '9'; i++)
     {
        if (m[i]!=0){
        cout<<j<<":"<<m[i]<<endl;
        }
        j++;
     }
     int ab =121;
     string cc=to_string(ab);
     cout<<cc<<endl;
     return 0;
     
}