#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<string> strscopy;
     for (unsigned int i = 0; i < strs.size(); i++)
     {
          string s1=strs[i];
          sort(s1.begin(),s1.end());
          strscopy.push_back(s1);
     }
     vector<vector<int> > b;
     for (unsigned int i = 0; i < strscopy.size(); i++)
     {    
          if (strscopy[i]=="!"){
            continue;
          }
           vector<int> zan;
           for (unsigned int j = i; j < strscopy.size(); j++)
           {   
               if (strscopy[i]==strscopy[j]){
                 zan.push_back(j);
               if (i!=j){
                 strscopy[j]="!";}
               }     
           }
           b.push_back(zan);
     }

     vector<vector<string> > as ; 
     for (unsigned int i = 0; i < b.size(); i++)
     {  vector<string> s1;
       for (unsigned int j = 0; j < b[i].size(); j++)
       {
        s1.push_back(strs[b[i][j]]);    
       }
       as.push_back(s1);
     }
     return as;
}

int main(){
 vector<string> s{"eat", "tea", "tan", "ate", "nat", "bat"};
 vector<vector<string>> d=groupAnagrams(s);
 for (unsigned int i = 0; i < d.size(); i++)
 {
    for (unsigned int j = 0; j < d[i].size(); j++)
    {
         cout<<d[i][j]<<endl;
    }
 }
 return 0;
}