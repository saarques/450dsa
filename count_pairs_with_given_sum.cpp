#include<bits/stdc++.h>
using namespace std; 

int main(){
  array<int, 49> arr = {48, 24, 99, 51, 33, 39, 29, 83, 74, 72, 22, 46, 40, 51, 67, 37, 78, 76, 26, 28, 76, 25, 10, 65, 64, 47, 34, 88, 26, 49, 86, 73, 73, 36, 75, 5, 26, 4, 39, 99, 27, 12, 97, 67, 63, 15, 3, 92, 90};
  int n = arr.size(), k = 50;
  unordered_map<int, int> umap;
  int count=0;
  for(int i=0; i<n; i++){
    umap[arr[i]] += 1;
  }
  for(int i=0; i<n; i++){
    if(arr[i]==k-arr[i]){
      count = count + umap[arr[i]] - 1;
      umap[arr[i]]--;
    }
    else if(umap.find(k-arr[i]) != umap.end() && umap[k-arr[i]] > 0){
      count = count + umap[arr[i]]*umap[k-arr[i]];
      umap[arr[i]] = 0;
      umap[k-arr[i]] = 0;
    }
  }
  cout<<count;
  return 0;
}
