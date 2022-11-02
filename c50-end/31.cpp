#include<iostream>
#include<map>
#include<string>
using namespace std;
int main (){
    int n;
    cin>>n;
    map<int,string> m;
    for (int i = 0; i < n; i++)
    {
         int a,b;
         cin>>a>>b;
         if (a%b==0){
            m[i]="YES";
         }else{
            m[i]="NO";
         }
    }

    for (int i = 0; i < n; i++)
    {
        string s=m[i];
        cout<<s<<endl;
    }
    
    return 0;
}