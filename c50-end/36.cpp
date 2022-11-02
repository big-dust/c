#include<iostream>
#include<string>
#include<string.h>
using namespace std;
bool D(string s){
   int y,m,d;
   string s1,s2,s3;
   s1=s.substr(0,4);
   s2=s.substr(5,2);
   s3=s.substr(8,2);
   y=stoi(s1);
   m=stoi(s2);
   d=stoi(s3);
   if (y>2014||y<1814){
    return false;
   }else{
    if (y==2014){
       if (m>9){
        return false;
       }else{
         if (m==9){
            if (d>6){
                return false;
            }
            return true;
        }
        return true;
       }
    }
    if (y==1814){
     if(m<9){
        return false;
     }else{
        if (m==9){
        if (d<6){
            return false;
        }
        return true;
        }
        return true;
     }
    }
     return true;
   }
}
int cmp(string s1,string s2){
       /* int y1,m1,d1;
        string c1,c2,c3;
        c1=s1.substr(0,4);
        c2=s1.substr(5,2);
        c3=s1.substr(8,2);
   y1=stoi(c1);
   m1=stoi(c2);
   d1=stoi(c3);
         int y2,m2,d2;
         string v1,v2,v3;
        v1=s2.substr(0,4);
        v2=s2.substr(5,2);
        v3=s2.substr(8,2);
   y2=stoi(v1);
   m2=stoi(v2);
   d2=stoi(v3);
   if (y1<y2){
    return 1;
   }else{
    if (y1==y2){
       if (m1<m2){
        return 1;
       }else{
        if (m1==m2){
           if (d1<d2){
            return 1;
           }else{
            if (d1==d2){
                return 0;
            }
            return -1;
           }
        }
        return -1;
       }

    }
    return -1;
   }*/
   return strcmp(s2,s1);
}
int main(){
   int n;
   cin>>n;
   string s;
   string old;  string young;
   int sum=0;
   string max; string min;
   for (int i = 0; i < n; i++)
   {
    string name;
    cin>>name;
    cin>>s;
    if (D(s)){
          sum++;
      if (sum==1){
        old=name;
        young=name;
        max=s;
        min=s;
        continue;
      }else{
        if (cmp(s,max)>0){
          max=s;
          old=name;
        }
        if (cmp(s,min)<0){
            min=s;
            young=name;
        }

      }
      
      
      
    } 
   }
cout<<sum<<" "<<old<<" "<<young<<endl;
return 0;   
}