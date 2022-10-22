#include<stdio.h>
int main(void){
  int a,b;
  puts("请输入两个数");
  scanf("%d%d",&a,&b);
  int s;
  s=a==b?1:0;
  if (s)
  puts("相等");
  else
  puts("不相等");
  return 0;
  
}
