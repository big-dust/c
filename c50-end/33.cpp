#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double n;
    char c;
    cin>>n;
    getchar();
    cin>>c;
    int m=(int)n;
    for (int i = 0; i < round(n/2); i++)
    {
        for (int j = 0; j < m; j++)
        {   
            if (i==0||i==round(n/2)-1){
            cout<<c;
            if (j==m-1){
                cout<<endl;
            }
            }else{
                if (j==0||j==m-1){
                    cout<<c;
                    if (j==m-1){
                        cout<<endl;
                    }
                }else{
                    cout<<" ";
                }
            }
             
        }
             
    }
    return 0;

}