#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int D(char c){
    if (c=='.'){
    return 1;
    }
    if (c>=48&&c<=57){
        return 2;
    }
    if (c=='E'||c=='e'){
        return 0;
    }
    if (c=='+'||c=='-'){
        return 3;
    }
    return -1;
}
bool isNumber(string s) {
int index=0;
while(s[index]==' '){
    index++;
}
int count=0;
int count1=0;
int chu=index;
int hei=0;
for (int i = 0; i < s.size(); i++)
{
   if (s[i]=='.'){
    hei++;
   }   
}
if (hei>1){
    return false;
}
while(1){
    if (s[index]==' '){
        int sum=0;

        string s2=s.substr(index,s.size());

        for (int l = 0; l < s2.size(); l++)
        {      
              if (s2[l]!=' '){
              sum++;
              }
        }
     if (sum==0){
        return true;
     }
    }

  


    if (D(s[index])==-1){

        return false;
    }




    int d=D(s[index]);
    if (d==3&&count==0){
        if (index!=chu&&D(s[index-1])!=3)
        {
            return false;
        }
        count++;
        index++;
    }



    count1++;
    if ((count1==1&&count==1)||(count1==1&&count==0)){
      if (D(s[index])==2){
        index++;
        if (index>=s.size()){
            return true;
        } 
        continue;
      }
    
      if (D(s[index])==1){
        if (D(s[index+1])!=2){
            return false;
        }
        index=index+2; 
        
        if (index>=s.size()){
            return true;
        }
        continue;
      }
    
      return false;
    }
    if (count1>1){
     
        if (D(s[index])==3){
            return false;
    
        }
         if (D(s[index])==2){
        index++;
        if (index>=s.size()){
            return true;
        }
        continue;
      }
      if (D(s[index])==1){
        if (D(s[index+1])!=2&&D(s[index-1])!=2){
            return false;
    
        }
    if (D(s[index+1])!=2&&D(s[index-1])==2){
        if (index-2>=0){
        if (s[index-2]=='.'){
        if (index-3>=0){
        if (s[index-3]){
          if (D(s[index-3])!=2){
            return false;
          }

        }}else if (index-3<0){
            return false;
        }
       }
       }


    }
    if (D(s[index+1])==2){
        index=index+2;}else{
            index++;
        }
        if (index>=s.size()){
            return true;
        }
        continue;
      }
       if (D(s[index])==0){
        index++;
        if (index>=s.size()){
            return false;
        }
        
        string s1=s.substr(index,s.size());
    
        int k=0;
        if (D(s1[0])==3){
            if (D(s1[1])!=2&&D(s1[1])!=1){
                return false;
            }
            k++;
        }
        /*int right=s1.rfind(,0);
        if (right==-1){
          right=s1.size();
        }*/
        int right=s1.size()-1;
        while(s1[right]==' '){
            right--;
        }
        if (D(s1[k])!=2){
            return false;
        }
        for (int j = k; j < right; j++)
        {
         if (D(s1[j])!=2){
            return false;
         }   
        }
         break;
       }
       if (s[index]==' '||index>=s.size()){
        break;
       }
    }
}
return true;
    }
int main(){
   int d=isNumber("32e8.636");
   if (d==1){
    cout<<"true"<<endl;
   } else{
   cout<<"false"<<endl;
   }
   return 0;
}