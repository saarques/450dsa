#include<bits/stdc++.h>
using namespace std; 

int main(){
  array<int, 5> nums = {1,3,4,2,2};
  int n = nums.size();
  unordered_map<int, int> umap;
  for(int i=0; i<n; i++){
    int temp = nums[i];
    if(umap.find(temp)==umap.end()){
      umap[temp]++;
    }
    else{
      cout<<temp;
      return 0;
    }
  }
  return 0;
}
