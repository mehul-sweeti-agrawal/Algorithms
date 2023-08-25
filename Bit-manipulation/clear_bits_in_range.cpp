// To clear bits in given range [i & j inclusive] (1 based indexing from left to right)

#include<iostream>
using namespace std;

int clearBitsInRange(int n, int i, int j) {
  int temp1 = (-1 << j);
  int temp2 = (~(-1 << (i-1)));
  int mask = temp1 | temp2;
  return (n & mask);
}

int main() {
  int n, i, j;
  cin >> n >> i >> j;
  cout << clearBitsInRange(n, i, j);
  return 0;
}