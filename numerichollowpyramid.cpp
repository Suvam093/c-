#include <iostream>
using namespace std;
int main()
{

    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         if(j==1||j==i||i==n){
    //             cout<<j;
    //         }
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }




//numeric hollow inverted half pyramid
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            if(j>=i){
                
                if(j==i||j==a||i==1){
                    cout<<j;
                }
                else cout<<" ";

            }
        }
        cout<<endl;
    }


  return 0;  
} 
