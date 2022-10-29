#include<stdio.h>
#define N 10
int main (){
 int a [N];
 for (int i = 0; i < N; i++)
 {
    scanf("%d",&a[i]);
 }

 
 for (int i = 1; i < N; i++)
 {       int w=a[i];
    for (int q = i; q >=1; q--)
    {   
       if (w<a[q-1]){
        a[q]=a[q-1];
         if (q-1==0){
            a[0]=w;
         } 
         
       } else{
        a[q]=w;
       }
    
    }
    
  
     
}
 for (int i = 0; i < N; i++)
{
    printf("%d ",a[i]);
}

return 0;

}