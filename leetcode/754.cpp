#include<iostream>
#include<math.h>
using namespace std;
int reachNumber(int target) {
int t =abs(target);
int i=1;
int sum=0;
int ret=1;
while(1){
sum=sum+i;
if (sum==t){
ret=i;
break;
}
if (sum>t){
    if ((sum-t)%2==0){
        ret=i;
        break;
    }else{
    i++;
    sum=sum+i;
    if(sum%2==0){
        ret=i;
        break; 
    }else{
        ret=i+1;
        break;
    }
    }
    
    
    
    }
i++;
}
return ;
    }



int main(){
int d =reachNumber(2);
cout<<d<<endl;
return 0;
}