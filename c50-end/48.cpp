#include<iostream>
#include<map>
#include<vector>
using namespace std;
int D(char a,char b){
    if (a==b){
        return 0;
    }
    if (a=='C'&&b=='B'){
            return -1;
    }
    if (a=='B'&&b=='j'){
            return -1;
    }
    if (a=='J'&&b=='C'){
        return -1;
    }
    return 1;
}
int main(){
   int n;
   cin>>n;
   getchar();
   int m=n;
 //  map<int,int>m1;
   map<char,int>m2;
   map<char,int>m3;
   int sum1=0;
   int sum2=0;
   while(n--){
    char a; char b;
    cin>>a;
    getchar();
    cin>>b;
    getchar();
    if (D(a,b)==1){
        sum1++;
        m2[a]=m2[a]+1;
    }
    if (D(a,b)==-1){
        sum2++;
        m3[b]=m3[b]+1;
    }
    }
    int ping=m-sum1-sum2;
    cout<<sum1<<" "<<ping<<" "<<sum2<<endl;
    cout<<sum2<<" "<<ping<<" "<<sum1<<endl;
    char max1;
    char max2;
    int maxf=0;
    int maxs=0;
    vector<char> d{'C','J','B'};
    for (int i = 0; i <3; i++)
    {
        if (m2[d[i]]==0){
            continue;
        }
     if (m2[d[i]]>=maxf){
        if (m2[d[i]]==maxf){
            if (d[i]<max1){
                max1=d[i];
            }
           continue;
        }
        max1=d[i];  
        maxf=m2[d[i]];
     }   
     }
    for (int i = 0; i < 3; i++)
    {
        if (m3[d[i]]==0){
            continue;
        }
     if (m3[d[i]]>=maxs){
        if (m2[d[i]]==maxs){
            if (d[i]<max2){
                max2=d[i];
            }
            continue;
        }
        max2=d[i];
        maxs=m3[d[i]];
     }
    }

  if (sum1==0){
    max1='B';
  }
  if (sum2==0){
    max2='B';
  }
  cout<<max1<<" "<<max2<<endl;    
  return 0;
}
