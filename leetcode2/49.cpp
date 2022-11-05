#include<iostream>
#include<vector>
using namespace std;
int nthUglyNumber(int n) {
vector<int> a;
a.push_back(1);
int p1=0;  int p2=0; int p3=0;
while(1){
  if (a.size()==n){
    break;
  }
  if (2*a[p1]<=3*a[p2]&&2*a[p1]<=5*a[p3]){
  a.push_back(2*a[p1]);
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
  a.push_back(3*a[p2]);
  if (3*a[p2]==2*a[p1]){
    p1++;
  }
  if (3*a[p2]==5*a[p3]){
    p3++;}
    p2++;
  continue;
  }
  if (5*a[p3]<=2*a[p1]&&5*a[p3]<=3*a[p2]){
    a.push_back(5*a[p3]);
    if (5*a[p3]==2*a[p1]){
        p1++;
    }
    if (5*a[p3]==3*a[p2]){
        p2++;
    }
    p3++;
  }
}
return *(a.end()-1);
}
int main(){
int d = nthUglyNumber(10);
cout<<d<<endl;
return 0;
}