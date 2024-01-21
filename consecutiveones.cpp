#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int>a;
    int n;
    cout<<"enter the length of the array"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        int d;
        cout<<"enter the "<<i<<"th element"<<endl;
        cin>>d;
        a.push_back(d);
    }

    int count=0, maxcount=0;
    for(int j=0; j<n; j++){
        if(a[j]==1){
            count++;
        }
        else if(a[j]==0){
            if(count>maxcount){
                maxcount=count;
                count=0;
            }
        }
        else {
            continue;
        }
    }
    cout<<"The max number of consecutive ones are: "<<maxcount<<endl;

    return 0;
} 
