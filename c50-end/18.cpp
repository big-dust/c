#include<iostream>
#include<vector>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int> cun ;
    for (int d = 0; d < q; d++)
    {
         int m,n,x,y;
         cin>>m>>n>>x>>y;
         vector<vector<int>> a(m);
         for (int j = 0; j < m; j++)
         {
            for (int k = 0; k < n; k++)
            {   int ru;
                cin>>ru;
                a[j].push_back(ru);
            }
         }
    int max;
    int sum;
for (int i = 0; i <= m-x; i++)
{
    for (int j = 0; j <= n-y; j++)
    {
        sum=0;
        for (int k = i; k < i+x; k++)
        {    
            for (int l =j ; l < j+y; l++)
            {   
                sum=sum+a[k][l];
            }
            
        }
        if (i==0&&j==0){
            max=sum;
        }else{
            if (max<sum){
                max=sum;
            }
        }
        
         
    }
    
}
 cun.push_back(max);
}
for (int i = 0; i < cun.size(); i++)
{
    cout<<cun[i]<<endl;
}

    return 0;

}