// To update ith bit of a number based on user's choice (1 based indexing)

#include<iostream>
using namespace std;

int updateIthBit(int n, int i, int bit) {
  int mask, updatedNumber;
  if(bit == 0) {
    mask = ~(1 << (i-1));
    updatedNumber = n & mask;
  } else if(bit == 1) {
    mask = (1 << (i-1));
    updatedNumber = n | mask;
  } else {
    cerr << "Invalid bit value";
    exit(1);
  }
  return updatedNumber;
}

int main() {
  int n, i, bit;
  cin >> n >> i >> bit;
  cout << updateIthBit(n, i, bit);
  return 0;
}