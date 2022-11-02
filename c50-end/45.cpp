#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> a;
    while(1){
        string s;
        getline(cin,s);

        if (s[0]=='E'){

            break;
        }
        int numz=0,numo=0,numj=0;
        for (unsigned int i = 0; i < s.size(); i++)
        {
            if (s[i]=='Z'){
                numz++;
            }
            if (s[i]=='O'){
                numo++;
            }
            if (s[i]=='J'){
                numj++;
            }
        }
        vector<int> d;
        d.push_back(numz);
        d.push_back(numo);
        d.push_back(numj);
        a.push_back(d); 
               
    }
    for (unsigned int i = 0; i < a.size(); i++)
    {   
         int z=a[i][0];
        int o=a[i][1];
        int j=a[i][2];
        int ma=max(z,o);
        int mi = max(ma,j);
         string s1;
        for (int K = 0; K < mi; K++)
    {
       if(z!=0){
         s1.append(1,'Z');
         z--;
       }    
       if (o!=0){
        s1.append(1,'O');
         o--;
       }
      if (j!=0){
        s1.append(1,'J');
        j--;
      }
    }
   cout<<s1<<endl;    
                  
    }
    return 0;
}