#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();

    // for(int i=0; i<size; i++){         //this for loop can also be written as 
    //     cout<<v[i]<<" ";
    // }

    for(auto it:v){                           // this is also known as for each loop 
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    print(arr1);
    arr1.pop_back();
    print(arr1);


    int n;
    cin>>n;

    vector<int>arr2;
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        arr2.push_back(d);    
    }
    print(arr2);



    cout<<arr2.at(3)<<endl;
    arr1.clear();

    vector<int>arr3(5, -1);
    print(arr3);


    vector<int>arr4 = {1,2,3,4,5};
    print(arr4);


    vector<int>arr5(arr4);
    print(arr5);


 return 0;   
}
