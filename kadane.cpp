#include<iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int arr[n];

  // input 
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // logic
  int sum = 0, runningSum = 0;

  for(int i=0; i<n; i++){
    runningSum += arr[i];
    if (sum < runningSum)
      sum = runningSum;
    if (runningSum < 0)
      runningSum = 0;
  }

  // output
  cout << sum << endl;

  return 0;

}