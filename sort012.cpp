#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int arr[9]={0,0,1,1,2,0,2,1,0};
    int n=9;
    int i=0; 
    
    for(int index=0; index<n; index++){
        if(arr[index]==0){
            swap(arr[i],arr[index]);
            i++;
        }
    }
    cout<<i;
    int j=i;

    for(int index=i; index<n; index++){
        if(arr[index]==1){
            swap(arr[j],arr[index]);
            j++;
        }
    }

    for(int g=0; g<n; g++){
        cout<<arr[g]<<" ";
    }
    return 0;
}