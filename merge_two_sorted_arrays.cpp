#include<bits/stdc++.h>
using namespace std; 

int main(){
  array<int, 5> nums = {1, 3, 7, 29, 121};
  int n = nums.size();
  array<int, 7> bums = {1, 1, 14, 21, 23, 34, 56};
  int m = bums.size();
  int i, j=0, k=0, min;
  for(i=0; i<n+m; i++){
    if(i<n){
      min = nums[i];
    }
    else{
      min = bums[i-n];
    }
    for(j=i+1; j<n+m; j++){
      if(j<n){
        if(min>nums[j]){
          min = nums[j];
          k=j;
        }
      }
      else{
        if(min>bums[j-n]){
          min = bums[j-n];
          k=j;
        }
      }
    }
    if((i<n && min != nums[i]) || (i>=n && min != bums[i-n])){
      if(i<n){
        if(k<n){
          nums[k] = nums[i];
          nums[i] = min;
        }
        else{
          bums[k-n] = nums[i];
          nums[i] = min;
        }
      }
      else{
        if(k>n){
          bums[k-n] = bums[i-n];
          bums[i-n] = min;
        }
      }
    }
  }
  for(i=0; i<n+m; i++){
    if(i<n){
      cout<<nums[i]<<" ";
    }
    else{
      cout<<bums[i-n]<<" ";
    }
  }
  return 0;
}
