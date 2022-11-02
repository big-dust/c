#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
bool D(char a){
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    getchar();
    vector<string> cs ; 
    string s;
    for (int i = 0; i < n; i++)
    {      
       
        getline(cin,s);
        cs.push_back(s);  
    }
    map<int,map<char,int>> m1;
    string s1;
    for (int i = 0; i < cs.size(); i++)
    {      s1=cs[i];
          map<char,int>  m;
          m['a']=1;
          m['e']=1;
          m['i']=1;
          m['o']=1;
          m['u']=1;
          for (int n = 0; n < s1.size(); n++)
          {
              if (m[s1[n]]!=0){
               m[s1[n]]=m[s1[n]]+1;
              }
          }
        m1[i+1]=m;
    }
    map<int,char> m2;
    m2[1]='a';
    m2[2]='e';
    m2[3]='i';
    m2[4]='o';
    m2[5]='u';
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
         cout<<m2[j]<<":"<<m1[i][m2[j]]-1<<endl;
         if (j==5&&i<n){
            cout<<endl;
         }
        }    
    }
    
return 0;

    
}
    
    



