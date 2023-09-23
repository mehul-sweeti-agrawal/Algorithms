#include<bits/stdc++.h>
using namespace std;

void print_using_iterators(vector<pair<int,string>> &vpi){
  vector<pair<int,string>>::iterator it = vpi.begin();
  for(it = vpi.begin(); it != vpi.end(); ++it){
    cout<<(it->first)<<" "<<(it->second)<<endl; // (*it).first <==> (it->first)
  }
}

void printVec(vector<pair<int,string>> &vpi){
  for(int i=0; i<vpi.size(); i++){
    cout<<vpi[i].first<<" "<<vpi[i].second<<endl;
  }
}

void print(vector<int> &vec){
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";
  }
  cout<<endl;
}

void printVec1(vector<vector<int>> &vec){
  for(int i=0; i<vec.size(); i++){
    print(vec[i]);
  }
}

int main(){
  vector<pair<int,string>> vpi;
  vpi.push_back(make_pair(1,"A"));
  vpi.push_back(make_pair(2,"b"));
  vpi.push_back(make_pair(3,"c"));
  printVec(vpi);

  vector<vector<int>> vec;
  vec.push_back(vector<int> {1,2,3});
  vec.push_back(vector<int> {1,2,3,4,5});
  vec.push_back(vector<int> {1,2});
  vec.push_back(vector<int> {});
  printVec1(vec);

  print_using_iterators(vpi);
  cout<<endl;
  for(pair<int,string> &p : vpi){
    cout<<p.first<<" "<<p.second<<endl;
  }
}