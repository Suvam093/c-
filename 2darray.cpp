#include <iostream>
#include <vector>
using namespace std;

void print2darray(int arr[][4], int row, int column){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void print2darraycolumnwise(int arr[][4], int row, int column){
    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    print2darray(arr, 3, 4);
    print2darraycolumnwise(arr, 3,4);




    int arr2[3][4];
    int row = 3, column =4;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<"Enter the "<<(column*i)+j+1<<"th value: "<<endl;
            cin>>arr2[i][j];
        }
    } 

    print2darray(arr2, row, column);

    

    return 0;
}
