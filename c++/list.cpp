#include<iostream>
using namespace std;
class Solution{
    public:
   static void D(int a){
    cout<<a<<endl;
   struct listnode{
    int d;
    struct listnode *next;
    listnode() : d(0), next(nullptr) {}
   };
    struct listnode l2;
   struct listnode *p=&l2;
  // struct listnode  *q=&l2;
   for (int i = 0; i < 0; i++)
   {
       (*p).d=i;
       p=p->next;
   }
   cout<<(*p).d<<endl;
   (*p).d=12;
   p->next=NULL;
   p=p->next;
   (*p).d=13;
   cout<<(*p).d<<endl;
   
   
   /*for (int i = 0; i < 10; i++)
   {
       cout<<(*q).d<<endl;
       q=q->next;
   }*/
//   (*p).d=12;

//   cout<<l2.d<<endl;



   
   
   
    }
};
int main(){
    Solution::D(1);
    return 0; 
}