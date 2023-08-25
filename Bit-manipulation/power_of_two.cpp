// To check whether a number is power of two using bitwise operator

#include<iostream>
using namespace std;

string checkPowerOfTwo(int n) {
  if((n & (n-1)) == 0)
    return "Power of Two";
  else
    return "Not a Power of Two";
}

int main() {
  int n;
  cin >> n;
  cout << checkPowerOfTwo(n);
  return 0;
}