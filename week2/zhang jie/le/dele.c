#include<stdio.h>
#include<stdlib.h>
int removeElement(int* nums, int numsSize, int val){
    int len=0;
   for (int i=0;i<numsSize;i++){
       if(nums[i]!=val){
           len++;
       }
   }
   for (int i=0; i<numsSize-1 ;i++){
       if (nums[i]==val){
           for (int n=i+1;n<numsSize;n++){
              if (nums[n]!=val){
               nums[i]=nums[n];
               nums[n]=val;
               break;
              }
           }
       }
   }
   
   return len; 
}
int main(){
    int *nums=calloc(4,sizeof(int));
    int val=3;
    nums[0]=3;
    nums[1]=2;
    nums[2]=2;
    nums[3]=3;
    int len=removeElement(nums,4,val);
    printf("%d\n",len);
    for (int i = 0; i < len; i++)
    {
       printf("%d ",nums[i]);
    }
    return 0;
}