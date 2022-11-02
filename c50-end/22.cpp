#include<iostream>
using namespace std;
int main(){
    int c1,c2;
    cin>>c1>>c2;
    int s=(c2-c1)/100;
    double s1=(c2-c1)/100.0;
    int rs=s%60;
    int min=s/60;
    int h=min/60;
     min=min%60;
    if (s1-(double)s>=0.5){
        rs++;
        if (rs==60){
         rs=0;
          min++;
            if (min==60){
                min=0;
                h++;
            }
        }
    }
    
    if (h<10){
        cout<<0;
}
    cout<<h<<":";
    if (min<10){
        cout<<0;
    }
    cout<<min<<":";
    if (rs<10){
        cout<<0;
    }
    cout<<rs;
    return 0;
}
