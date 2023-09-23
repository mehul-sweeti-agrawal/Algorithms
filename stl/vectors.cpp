#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
  }
}

int main(){
  vector<int> v;
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);

  printVec(v);
  cout<<endl;
  swap(v[0], v[3]);
  printVec(v);

  return 0;

}