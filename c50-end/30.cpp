#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main(){
    int A,DA,B,DB;
    cin>>A>>DA>>B>>DB;
    int numa=0;
    int numb=0;
    string a=to_string(A);
    string b=to_string(B);
    string a1=to_string(DA);
    string b1=to_string(DB);
    for (int i = 0; i <a.size(); i++)
    {
        if(a[i]==a1[0]){
            numa++;
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i]==b1[0]){
            numb++;
        }
    }
    int PA=0;
    for (int i = 0; i <numa ; i++)
    {
       PA=PA+DA*pow(10,i);     
    }
    int PB=0;
    for (int i = 0; i < numb; i++)
    {
        PB=PB+DB*pow(10,i);
    }
    cout<<PA+PB<<endl;
    return 0;
}