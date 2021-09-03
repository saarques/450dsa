#include<bits/stdc++.h>
using namespace std; 

int main(){
  int i, c0 = 0, c1 = 0, c2 = 0;
  array<int, 9> arr = {0, 1, 2, 1, 2, 0, 2, 0, 1};
  int n = arr.size();
  for(i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  for(i=0; i<n; i++){
    if(arr[i]==0){
      c0++;
    }
    if(arr[i]==1){
      c1++;
    }
  }
  c2 = n - c0 - c1;
  for(i=0; i<n; i++){
    if(c0>0){
      arr[i] = 0;
      c0--;
    }
    else if(c1>0){
      arr[i] = 1;
      c1--;
    }
    else{
      arr[i] = 2;
    }
  }
  for(i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
