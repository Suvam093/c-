#include <iostream>
using namespace std;

int sortedArray(int arr[], int n){
    for(int j=0; j<n; j++){
        if(arr[j+1]<arr[j]&arr[j]<arr[j+1]){
            return 0;
        }
        else if(arr[j]<arr[j+1]){
            return 1;
        }
        else if(arr[j+1]<arr[j]){
            return 2;
        }

    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }

    int b=sortedArray(arr,n);
    if(b==0){
        cout<<"the array is not sorted";
    }
    else if(b==1){
        cout<<"the array is sorted in ascending order";
    }

    else{
        cout<<"the array is sorted in descending order";
    }

    return 0;
} 