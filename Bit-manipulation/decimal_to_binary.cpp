// To convert a decimal number to a binary number

#include<iostream>
using namespace std;

long convertToBinary(int n) {
  long power = 1, ans = 0;
  while(n) {
    if(n & 1)
      ans += power;
    power *= 10;
    n >>= 1;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << convertToBinary(n);
  return 0;
}