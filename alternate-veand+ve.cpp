#include <iostream>
using namespace std;

int main()
{
    int arr[10]={-1,-2,-3,-4,-5,1,2,3,4,5};
    int n=10; 
    int left =0; 
    int right =n-1;
    int index =0;
    int arr2[n];
    while (index <n){
        if(arr[index]>0){
            arr2[left]=arr[index];
            left = left +2 ;  
            
        }
        
        else{
            arr2[right]=arr[index];
            right=right-2;
        }
        index++;
    }
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
}