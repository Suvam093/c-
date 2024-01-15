#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int j=0; j<n; j++){
        if(arr[j]<arr[j+1]){
            cout<<"the array is sorted in ascending order";
        }
        else if(arr[j+1]<arr[j]){
            cout<<"the array is sorted in descending order";
        }

        else{
            cout<<"the array is not sorted";
        }
    }

    return 0;
} 
