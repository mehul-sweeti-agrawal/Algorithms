// To check whether a number is power of four using bitwise operator

#include<iostream>
using namespace std;

string checkPowerOfFour(int n) {
  if((n & (n-1)) == 0 && (n%10 == 4 || n%10 == 6))
    return "Power of Four";
  else
    return "Not a Power of Four";
}

int main() {
  int n;
  cin >> n;
  cout << checkPowerOfFour(n);
  return 0;
}