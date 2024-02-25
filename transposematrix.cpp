#include <iostream>
using namespace std; 

int main(){
    int arr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row = 3; 
    int column= 3;
    int arr2[3][3];

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            arr2[i][j]= arr[j][i]; 
        }
    }


    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}