#include<iostream>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

string D(double a1,double b1,double a2,double b2){
  double A=a1*a2-b1*b2;
  double B=a2*b1+a1*b2;
  int a=0,b=0;
  

  string s1=to_string(A);
  string s2=to_string(B);
  char * s3=(char*)calloc(s1.size()+1,sizeof(char));
  char * s4=(char*)calloc(s2.size()+1,sizeof(char));
  sprintf(s3,"%.2lf",A);
  sprintf(s4,"%+.2lf",B);
  s3[s1.size()]='\0';
  s4[s2.size()]='\0';
  s1=s3;
  s2=s4;
  if (abs(A)>=0&&abs(A)<0.005){
   s1="0.00"; 
  }
  if (abs(B)>=0&&abs(B)<0.005){
  s2="+0.00";
  }
///sprintf(s1,"%.2lf",A);// char s1[];
//cout<<s1.size()<<endl;
string s=s1+s2+"i";
return s;
}
int main(){
    double r1,p1,r2,p2;
    cin>>r1>>p1>>r2>>p2;
    double a1,b1,a2,b2;
    a1=r1*cos(p1);
    b1=r1*sin(p1);
    a2=r2*cos(p2);
    b2=r2*sin(p2);
    string s=D(a1,b1,a2,b2);
    cout<<s<<endl;
    return 0;
}
