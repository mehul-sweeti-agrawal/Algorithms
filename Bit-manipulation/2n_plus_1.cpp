#include<iostream>
using namespace std;

int two_n_plus_one(int* arr, int n){
  int ans = 0;
  for(int i=0; i<n; i++){
    ans^=arr[i];
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<two_n_plus_one(arr,n)<<endl;
  return 0;
}