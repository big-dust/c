#include<stdio.h>
 
int main(){
 
    int n, m1, m2;
 
    long m[600];
 
    m[1]=m1=m2=1; //跳过零符合习惯，索引1对应第一个元素，同时是m1 m2都指向第一个元素；
 
    scanf("%d", &n);
 
    for (int i = 2; i <= n; i++)
   //有了1之后，后面所有的数都是有2x+1或3x+1从前面的元素运算而来的  或者可以看做两个数组合并在一起并去重
        if (2 * m[m1] < 3 * m[m2] - 1){  //进行该比较时，m1 m2指向的元素的前面  有以下
                                         //两种情况   1.前面没有元素  2.前面的元素都已经进行过两种运算
                                            //所以此时  m1进行2x+1 运算的结果 m2 指向的元素3x+1的结果是集合中所有元素尽量两   种运算的结果的各自集合中的最小(这个最小是还未放入数组的最小，已放入的不考虑了）
 
             m[i] = 2 * m[m1] ;   //运算结果放入
 
            m1++;  //右移m1 的指向   
 
        }
 
        else
 
        {
 
            m[i] = 3 * m[m2] - 1;
 
            if (2 * m[m1] == 3 * m[m2] - 1 ) { m1++; }//因为相一个当于两个递增数组合并时会有重复元素，m1的运算结果要跳一个 不放入
                                                          //只让m2此时的3x+1运算结果放入就行了 m1 进行2x+1运算结果和前面的
                                                          //结果相同   (这两个x对应的元素不同)
 
            m2++;   //      右移m2的指向
 
        }
 





    for (int ss = 1; ss <=n; ss++) {
 
        if (ss ==1)printf("1");
 
        else { printf(" %d", m[ss]); }
 
    }

}
