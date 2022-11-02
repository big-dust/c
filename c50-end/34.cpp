#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int adr=0;
    int bdr=0;
    for (int i = 0; i < n; i++)
    {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int target=a+c;
       if (b==target&&d!=target){
           bdr++;
       }
       if (d==target&&b!=target){
          adr++;
       }

    }
   cout<<adr<<" "<<bdr<<endl;
   return 0;    
}