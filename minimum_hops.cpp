#include<bits/stdc++.h>
using namespace std; 

int main(){
  array<int, 84> arr = {32, 54, 12, 52, 56, 8, 30, 44, 94, 44, 39, 65, 19, 51, 91, 1, 5, 89, 34, 25, 58, 20, 51, 38, 65, 30, 7, 20, 10, 51, 18, 43, 71, 97, 61, 26, 5, 57, 70, 65, 0, 75, 29, 86, 93, 87, 87, 64, 75, 88, 89, 100, 7, 40, 37, 38, 36, 44, 24, 46, 95, 43, 89, 32, 5, 15, 58, 77, 72, 95, 8, 38, 69, 37, 24, 27, 90, 77, 92, 31, 30, 80, 30, 37};
  int n = arr.size();
  int i, count=0, max = 0, index=0;
  if(arr[0]<=0){
    return -1;
  }
  i = 0;
  max = arr[i];
  index = i;
  while(1){
    if(max+index>=n-1){
      cout<<++count;
      return 0;
    }
    if(max<=0){
      cout<<"-1";
      return 0;
    }
    count++;
    for(int j=i+1; j<i+1+arr[i]; j++){
      if(max<arr[j]){
        max = arr[j];
        index = j;
      }
    }
    i = index;
  }
  return 0;
}
