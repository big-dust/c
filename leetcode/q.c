#include<stdio.h>
int main(){
    int a[40]={0};
    int a1[]={1,2,3,12,16,20,25,40,0};
    int a2[]={4,5,6,15,18,20,21,22,25,38,45,0};
    int n1=0; int n2=0;
    int i=0;
    while(!(a1[n1]==0&&a2[n2]==0)){
      if (a1[n1]==0){
        a[i]=a2[n2];
        n2++;
        i++;
        continue;
      }
      if (a2[n2]==0){
        a[i]==a1[n1];
        n1++;
        i++;
        continue;
      }
   if (a1[n1]==a2[n2]){
   a[i]=a1[n1];
   a[i+1]=a2[n2];
   n1++;
   n2++;
   i=i+2;
   }
      if (a1[n1]<a2[n2]){
        a[i]=a1[n1];
        n1++;
        i++;
        continue;
      }

      if (a2[n2]<a1[n1]){
        a[i]=a2[n2];
        n2++;
        i++;
        continue;
        }
    }
    for (int i = 0; i < 40; i++)
    {
        if (a[i]==0){
            continue;
        }
        printf("%d ",a[i]);
    }
    

}