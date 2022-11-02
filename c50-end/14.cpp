#include<iostream>
using namespace std;
bool D(int a){
    int sum=0;
    for (int i = 1; i <= a; i++)
    {
     if (a%i==0){
        sum++;
     }       
    }
    if (sum==2){
        return true;
    }
    return false;
    
}
int main(){
     int m,n;
     cin>>m>>n;
     int i=2;
     int c=0;
     int c1=0;
     while(1){
       if (D(i)){
         c++;
         if (c>=m&&c<=n){
            c1++;
            if (c==n){
            cout<<i;
            break;
            }
            if (c1%10==0){
                cout<<i<<endl;
            }else
            {
                cout<<i<<" ";
            }
            
         }
       }
       i++;
     }  
     return 0;  
}