#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cout<<"enter the no of stars"<<endl;
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(i==0||j==0||i==n-j-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<""<<endl;
    }

    return 0;
}


/*
output is:

    enter the no of stars
    6
    * * * * * *
    *       *
    *     *
    *   *
    * *
    *
*/
