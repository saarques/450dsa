#include<bits/stdc++.h>
using namespace std; 

int main(){
  int i=0, j;
  array<int, 9> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
  int n = arr.size();
  j = n-1;
  while(i<=j){
    if(arr[i]<0){
      i++;
    }
    else if(arr[j]>=0){
      j--;
    }
    else if(arr[i] >= 0 && arr[j]<0){
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--; 
    }
  }
  for(i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
