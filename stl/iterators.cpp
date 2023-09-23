#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v = {1,2,3,4,5,6,7};
  vector<int>::iterator it = v.begin();
  cout<<(*(it+1));

}

// it++ -> next iterator
// it+1 -> next location 
// in case of vectors there is no difference between it++ and it+1
