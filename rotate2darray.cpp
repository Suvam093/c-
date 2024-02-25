#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
  vector<vector<int> >arr={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  }; 
  int n;
  n=arr.size();
  cout<<n<<endl;
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
        swap(arr[i][j],arr[j][i]);
    }
  }



  for(int i=0; i<n; i++){
    for(int j=0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

cout<<endl;

    for(int i=0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }


  for(int i=0; i<n; i++){
    for(int j=0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
  return 0;
} 
