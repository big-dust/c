#include<iostream>
#include<vector>
using namespace std;
int nthUglyNumber(int n) {
vector<int> a(n);
a[0]=1;
int p1=0;  int p2=0;   int p3=0;
for (int i = 1; i <= n-1; i++)
{
       if (2*a[p1]<=3*a[p2]&&2*a[p1]<=5*a[p3]){
        a[i]=2*a[p1];
     
        if (2*a[p1]==3*a[p2]){
            p2++;
        }
        if (2*a[p1]==5*a[p3]){
            p3++;
        } 
          p1++;
        continue;
       }
      if (3*a[p2]<=2*a[p1]&&3*a[p2]<=5*a[p3]){
        a[i]=3*a[p2];
       
        if (3*a[p2]==2*a[p1]){
            p1++;
        }
        if (3*a[p2]==5*a[p3]){
            p3++;
        } 
        p2++;
        continue;
      }
      if (5*a[p3]<=2*a[p1]&&5*a[p3]<=3*a[p2]){
        a[i]=5*a[p3];
       
        if (5*a[p3]==2*a[p1]){
            p1++;
        }
        if (5*a[p3]==3*a[p2]){
            p2++;
        } 
        p3++;
        continue;
      }
}
return a[n-1];
    }
int main (){
int d=nthUglyNumber(10);
cout<<d<<endl;
return 0;
}