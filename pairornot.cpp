#include <bits/stdc++.h>
using namespace std;

 void notaPair(int arr[], int n){
    int ans =0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
        if(ans!=0){
            
        }
    }
    cout<<ans<<endl;
 }

int main() {
    int t;
    int n;
    cin>>t;
    
    int mv;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        notaPair(a,n);
        }
         return 0;
    }
 



