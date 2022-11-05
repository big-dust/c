#include<iostream>
#include<string>
#include<vector>
using namespace std;
string convert(string s, int numRows) {
vector<int> b(s.size());
vector<vector<int>> a;
for (int i = 0; i < numRows; i++)
{
    a.push_back(b);
}
int d=numRows;
int k=0;
int i=0;  int j=0;
int c1=1; int c2=0; 
while(1){
  a[i][j]=s[k];
  k++;
  if (k==s.size()){
    break;
  }
  if (c2==0){
   i++;

   c1++;
   if (c1==d+1){
    i=i-2;
    j++;
    c1=0;
    c2=1;
   }
   continue;
  }
   if (c1==0){
    i--;
    j++;

    c2++;

    if (c2==d){
        
        i=i+2;
        j--;

        c2=0;
        c1=2;
    }
    continue;
   }
}

string res;
for (int i = 0; i < a.size(); i++)
{
      for (int j = 0; j < b.size(); j++)
      {
        if (a[i][j]!=' '){
        res.push_back(a[i][j]);
        } 
      }
      
}
/*for (int i = 0; i < a.size(); i++)
{  
    for (int j = 0; j < b.size(); j++)
    {
          printf("%c",a[i][j]);
         if (j==b.size()-1){
            cout<<endl;
         }
    }
    
}*/
return res;
}


int main(){
string s=convert("PAYPALISHIRING",4);
cout<<s<<endl;
return 0;

}