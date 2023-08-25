// To check whether a number is odd or even using bitwise operator (Faster than modulus approach)

#include<iostream>
using namespace std;

string oddEven(int n) {
  if((n & 1) == 1)
    return "Odd";
  else
    return "Even";
}

int main() {
  int n;
  cin >> n;
  cout << oddEven(n);
  return 0;
}