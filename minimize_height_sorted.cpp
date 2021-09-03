#include<bits/stdc++.h>
using namespace std; 

int main(){
  int i, max, min;
  array<int, 4> arr = {1, 1, 1, 1};
  int n = arr.size();
  int k = 2;
  for(i=0; i<n-1; i++){
    int temp = arr[i+1]-arr[i];
    if(arr[i+1]-k>0 && temp>temp-2*k){
      arr[i] += k;
      arr[i+1] -= k;
    }
  }
  min = arr[0];
  max = arr[0];
  for(i=1; i<n; i++){
    if(min>arr[i]){
      min = arr[i];
    }
    if(max<arr[i]){
      max = arr[i];
    }
  }
  cout<<max-min;
}
