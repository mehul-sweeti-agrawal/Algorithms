// To get the ith bit of a number (1 based indexing from right to left)

#include<iostream>
using namespace std;

bool getIthBit(int n, int i) {
  int mask = (1 << (i - 1));
  return (n & mask)? true : false; 
}

int main() {
  int n, i;
  cin >> n;
  cin >> i;
  cout << getIthBit(n, i);
  return 0;
}