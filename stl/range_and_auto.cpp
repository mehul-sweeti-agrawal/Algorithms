#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v = {1,2,3,4,5};
  for(int value : v)
    cout<<value<<" ";
  cout<<"\n";
  return 0;
}

//value will contain copies of actual elements
//and the actual element itself

/*We can use reference in order to get access
of actual values of the vector*/