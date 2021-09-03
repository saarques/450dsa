#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n, max, min;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  // quicksortit(arr, 0, n-1);
  max = arr[0];
  min = arr[0];
  for(int i=1; i<n; i++){
    if(max<arr[i]){
      max = arr[i];
    }
    if(min>arr[i]){
      min = arr[i];
    }
  }
  cout<<"Minimum: "<<min<<endl<<"Maximum: "<<max;
  return 0;
}
