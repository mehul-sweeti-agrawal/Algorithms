// To clear last i bits (1 based indexing from right to left)

#include<iostream>
using namespace std;

int clearLastIBits(int n, int i) {
  int mask = (-1 << i);
  return (n & mask);
}

int main() {
  int n, i;
  cin >> n >> i;
  cout << clearLastIBits(n, i);
  return 0;
}