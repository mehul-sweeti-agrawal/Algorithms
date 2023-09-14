#include<iostream>
using namespace std;

void two_n_plus_two(int* arr, int n){
  int cumXOR = 0;
  for(int i=0; i<n; i++){
    cumXOR ^= arr[i];
  }

  int position = 0, cnt=0;
  while(cumXOR){
    if(cumXOR & 1){
      position = cnt;
      break;
    }
    cumXOR >>= 1;
    cnt++;
  }

  int A = 0, B = 0;
  int mask = (1<<position);
  for(int i=0; i<n; i++){
    if(arr[i] & mask > 0){
      A ^= arr[i];
    }
    else{
      B ^= arr[i];
    }
  }

  cout<<A<<" "<<B<<endl;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  two_n_plus_two(arr, n);
  return 0;
}