#include<bits/stdc++.h>
using namespace std; 

int main(){
  int i, j;
  array<int, 9> arr = {12, 1, 3, 5, 6, 17, 5, 8, 6};
  int n = arr.size();
  int temp, poc = arr[0], t = arr[n-1];
  for(i=1; i<n; i++){
    temp = arr[i];
    arr[i] = poc;
    poc = temp;
  }
  arr[0] = t;
  for(i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
