#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    vector<double> b;
    while(1){
        double all;
        int num;
        cin>>all>>num;
        if (num==0){
            break;
        }
       vector<double> a;
       for (int i = 0; i < num; i++)
       {
           int q; 
           cin>>q;
           double sum=0;
           for (int j = 0; j < q; j++)
           {
           getchar();
           char w=getchar();
           getchar();
           double e;
           cin>>e;
           if (e<=600&&(w=='A'||w=='B'||w=='C')){
            sum=sum+e;
           }else{
            sum=0;
            break;
           }
           }
           if (sum<=1000.0&&sum<all&&sum!=0){
            a.push_back(sum);
           }
       }
     if (!a.empty()){
     sort(a.begin(),a.end());
     for ( int i = 0; i < a.size(); i++)
     {
      if (accumulate(a.begin()+i,a.end(),0.0)<=all){
        double t=accumulate(a.begin()+i,a.end(),0.0);
        b.push_back(t);
        break;
      }
     }
     }else{
        b.push_back(0);
     }
    }

  for (int i = 0; i < b.size(); i++)
  {
printf("%.2lf\n",b[i]);
  }
    return 0;
}