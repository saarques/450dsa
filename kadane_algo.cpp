#include<bits/stdc++.h>
using namespace std; 

int main(){
  int i, max;
  array<int, 9> arr = {-12, -1, -3, -5, -6, -17, -5, -8, -6};
  int n = arr.size();
  int loc = 0, glo = 0;
  for(i=0; i<n; i++){
    loc += arr[i];
    if(loc<0){loc = 0;}
    if(loc>glo){
      glo = loc;
    }
  }
  if(glo==0){
    max = arr[0];
    for(i=1; i<n; i++){
      if(max<arr[i]){
        max = arr[i];
      }
    }
    glo = max;
  }
  cout<<glo;
  return 0;
}
