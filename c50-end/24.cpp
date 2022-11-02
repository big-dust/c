#include<iostream>
#include<string>
#include<map>
#include<math.h>
using namespace std;
int main(){
    char c;
    map<char,int>m;
    char j='0';
    for (int i = 0; i <=9 ; i++)
    {
         m[j]=i;
         j++;    
    }
    map<int,string> m1;
    m1[1]="yi"; m1[2]="er"; m1[3]="san"; m1[4]="si"; m1[5]="wu"; 
    m1[6]="liu";m1[7]="qi"; m1[8]="ba";  m1[9]="jiu"; m1[0]="ling";
    /*j='0';
    for (int i = 0; i <=9; i++)
    {
       m1[i]=j;
       j++;   
    }*/
    int sum=0;
    while(1){
        c=getchar();
        if (c=='\n'){
            break;
        }
       sum=sum+m[c]; 
    }
    int sumcpy=sum;
    int wei=0;
    cout<<sum<<endl;
    while(1){
        if (sumcpy<=0){
            break;
        }
         wei++;
         sumcpy=sumcpy/10;
    }

   for (int i = wei-1; i >=0; i--)
    {
        
       cout<<m1[(int)(sum/pow(10,i))%10];
       if (i!=0){
            cout<<" ";
       } 
    }
    
    return 0;
}