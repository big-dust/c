#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> allscore ;int d;
    for (int i = 0; i < m; i++)
    {
        cin>>d;
        allscore.push_back(d);
    }
    vector<int> ans ;
    for (int i = 0; i < m; i++)
    {
       cin>>d;
       ans.push_back(d);   
    }
    vector<int> score;
    for (int i = 0; i < n; i++)
    {   int sum=0;
        for (int j = 0; j < m; j++)
        {
            cin>>d;
            if (d==ans[j]){
               sum=sum+allscore[j];
            }
        }
        score.push_back(sum);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<score[i]<<endl;
    }
    
    return 0;
    
}