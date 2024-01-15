// Chef visited a grocery store for fresh supplies. There are N items in the store where the 
// i th item has a freshness value A 
// i and cost B Chef has decided to purchase all the items having a freshness value greater than equal to 
// X. Find the total cost of the groceries Chef buys.


// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains two space-separated integers 
// �
// N and 
// �
// X — the number of items and the minimum freshness value an item should have.
// The second line contains 
// �
// N space-separated integers, the array 
// �
// A, denoting the freshness value of each item.
// The third line contains 
// �
// N space-separated integers, the array 
// �
// B, denoting the cost of each item.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        // your code goes here
        int k=0;
        for(int i=0; i<n; i++){
            if(a[i]>=x){
                k=k+b[i];
            }
            
        }
        cout<<k<<endl;
        
    }

}


// input

// 4
// 2 20
// 15 67
// 10 90
// 3 1
// 1 2 3
// 1 2 3
// 3 100
// 10 90 50
// 30 7 93
// 4 50
// 12 78 50 40
// 40 30 20 10