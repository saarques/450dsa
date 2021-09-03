#include<bits/stdc++.h>
using namespace std; 

void display(int ar[], int n){
  for(int i=0; i<n; i++){
    cout<<ar[i]<<" ";
  }
  cout<<endl;
}

void swap(int* a, int* b){
  int t = *a; 
  *a = *b; 
  *b = t; 
} 

int partition (int arr[], int low, int high){ 
  int pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++){ 
    if (arr[j] < pivot){ 
      i++; 
      swap(&arr[i], &arr[j]); 
    } 
  } 
  swap(&arr[i + 1], &arr[high]); 
  return (i + 1); 
} 
  

void quicksortit(int arr[], int low, int high){
  if (low < high){ 
    int pi = partition(arr, low, high); 
    quicksortit(arr, low, pi - 1); 
    quicksortit(arr, pi + 1, high); 
  } 
}

int main(){
  int n, k;
  cin>>n;
  cin>>k;
  if(k>n){
    cout<<"Not possible!";
    return 0;
  }
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  quicksortit(arr, 0, n-1);
  cout<<k<<"th Minimum: "<<arr[k-1]<<endl<<k<<"th Maximum: "<<arr[n-k];
  return 0;
}
