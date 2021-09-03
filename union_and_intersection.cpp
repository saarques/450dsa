#include<bits/stdc++.h>
using namespace std; 

int main(){
  int i, j;
  array<int, 9> arr = {12, 1, 3, 5, 6, 17, 5, 8, 6};
  array<int, 9> brr = {1, 0, 23, 5, 6, 7, 15, 0, 16};
  int n = arr.size(), m = brr.size();
  unordered_map<int, int> umap;

  for(i=0; i<n; i++){
    if(umap.find(arr[i]) == umap.end()){
      umap[arr[i]] = 1;
    }
  }
  for(i=0; i<m; i++){
    if(umap.find(brr[i]) == umap.end()){
      umap[brr[i]] = 1;
    }
  }
  cout<<"Union: ";
  for(auto x: umap){
    cout<<x.first<<" ";
  }
  cout<<endl;

  umap.erase(umap.begin(), umap.end());

  for(i=0; i<n; i++){
    if(umap.find(arr[i]) == umap.end()){
      umap[arr[i]] = 1;
    }
  }
  for(i=0; i<m; i++){
    if(umap.find(brr[i]) != umap.end()){
      umap[brr[i]] += 1;
    }
  }
  cout<<"Intersection: ";
  for(auto x: umap){
    if(x.second==2){
      cout<<x.first<<" ";
    }
  }
  return 0;
}
