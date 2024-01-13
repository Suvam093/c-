#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<2*n-1; j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k<2*i+1){
                cout<<"*";
                k++;
            }
            else cout<<" ";
        }
        cout<<endl;
    }


    // for(int i=0; i<n; i++){
    //     int k=0;
    //     for(int j=0; j<2*n-1; j++){
    //         if(j<n-i-1){
    //             cout<<"*";
    //         }
    //         else if(k<2*i+1){
    //             cout<<" ";                     
    //             k++;
    //         }
    //         else cout<<"*";5
    //     }
    //     cout<<endl;
    // }

        //output
        // *** ***
        // **   **
        // *     *

    if(~0==1){
        cout<<"yes";

    }
    else{
        cout<<"no";
    }


    return 0;
} 
