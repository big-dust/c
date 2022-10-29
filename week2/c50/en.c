#include<stdio.h>
int main(){
int n;
    int i=0;
    int min;
    for ( i=0;i<numsSize;i++){
         min=i;
       for( n=i;n<numsSize;n++)
      if (nums[n]<nums[min]){
          min=n;
      }}
      int c =nums[i];
      nums[i]=nums[min];
      nums[min]=c;
    
     //   qsort(nums, numsSize, sizeof(int), cmp);
    
    int **g = (int**)malloc(sizeof(int*) * 18000);
    }