#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int g,s,b;
      g=n%10;
      n=n/10;
      s=n%10;
      n=n/10;
      b=n%10;
      string d(b,'B');
      d.append(s,'S');
      for (int i = 1; i <= g; i++)
      {
        d.append(to_string(i));
      }
      cout<<d<<endl;
      return 0;
}