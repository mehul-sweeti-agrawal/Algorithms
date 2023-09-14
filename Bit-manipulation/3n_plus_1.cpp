#include<iostream>
#include<vector>
using namespace std;

// number is stored in reverse order in this num_digits vector
int num_from_array(vector<int> num_digits){
  int num = 0;
  for(int i=0; i<num_digits.size(); i++){
    num += num_digits[i] * (1 << i);
  }
  return num;
}

int three_n_plus_1(int* arr, int n){
  vector<int> num_digits(32,0);
  int cnt;
  for(int i=0; i<n; i++){
    cnt = 0;
    while(arr[i]){
      num_digits[cnt] += arr[i]&1;
      arr[i] >>= 1;
      cnt++;
    }
  }

  for(int i=0; i<32; i++){
    num_digits[i] %= 3;
  }

  return num_from_array(num_digits);

}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<three_n_plus_1(arr,n)<<endl;
  return 0;
}