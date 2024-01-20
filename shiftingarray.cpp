#include <iostream>
using namespace std;




int main(){
    int arr[] = {4,21,5,1,6,3,9,7};
    // output should be 9,7,4,21,5,1,6,3
    int n;
    n = end(arr) - begin(arr);

    int temp[2] = {arr[n-2],arr[n-1]};
    for(int i=n-1; i>=0; i--){
        arr[i]=arr[i-2];
    }
    for(int i=0; i<2; i++){
        arr[i]=temp[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
        
    return 0;   
}
