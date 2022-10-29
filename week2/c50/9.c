#include<stdio.h>
#include<stdlib.h>
int Daynumber( int month){
    int  m=month;
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        return 31;
    }else{
        return 30;
    }
    
}
int Run(int year){
   if ((year%4==0 && year%100!=0)||(year%400==0)){
       return 1;
   }
   return 0;
}
int main(){
    int year=0;
    int month=0;
    int day=0;
    int *a=calloc(100,sizeof(int));
    int ac=0;
   while(1){
      int sumday=0;
      scanf("%d/%d/%d",&year,&month,&day);
      if (year==0){
        break;
      }
      for (int i = 1; i < month; i++)
      {   
        if (i==2){
            if (Run(year)){
                sumday=sumday+29;
            }else{
                sumday=sumday+28;
            }
            continue;
        }
          sumday=sumday+Daynumber(i);
      }
      sumday=sumday+day;
      a[ac++]=sumday;
   }
   for (int i = 0; i < ac; i++)
   {
    printf("%d\n",a[i]);
   }
   
   return 0;
}