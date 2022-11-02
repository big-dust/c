#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    int n;
    cin>>x>>n;
    for (int i = 0; i < n; i++)
    {
        int n1,b,t,n2;
        cin>>n1>>b>>t>>n2;
        if (t>x){
            cout<<"Not enough tokens.  Total = "<<x<<"."<<endl;
            continue;
        }
        if ((n2>n1)==b){
            x=x+t;
            cout<<"Win "<<t<<"!"<<"  Total = "<<x<<"."<<endl;
            
        }else{
            x=x-t;
         cout<<"Lose "<<t<<".  Total = "<<x<<"."<<endl;
        }
        if (x==0){
            cout<<"Game Over."<<endl;
            break;
        }
    }
    return 0;
}