#include<bits/stdc++.h>
using namespace std; 

void display(int ar[], int n){
  for(int i=0; i<n; i++){
    cout<<ar[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  display(arr, n);
  for(int i=0; i<n/2; i++){
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }
  display(arr, n);
  return 0;
}
