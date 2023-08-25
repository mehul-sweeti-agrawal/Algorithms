// To set ith bit of a number (1 based indexing from left to right)

#include<iostream>
using namespace std;

int setIthBit(int n, int i) {
  int mask = (1 << (i-1));
  return (n | mask);
}

int main() {
  int n, i;
  cin >> n >> i;
  cout << setIthBit(n, i);
  return 0;
}