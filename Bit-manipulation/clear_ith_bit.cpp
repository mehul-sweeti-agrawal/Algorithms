// To clear(set bit value to 0) ith bit of a number (1 based indexing from right to left)

#include<iostream>
using namespace std;

int clearIthBit(int n, int i) {
  int mask = (~(1 << (i-1)));
  return (n & mask);
}

int main() {
  int n, i;
  cin >> n >> i;
  cout << clearIthBit(n, i);
  return 0;
}