#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        while(1){
            char c=getchar();
            if (c=='\r'||c=='\n'){
                break;
            }
            if (c>=48&&c<=57){
              sum++;
            }
        }
       a.push_back(sum);           

    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
    
}