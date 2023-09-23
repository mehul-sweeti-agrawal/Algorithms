#include<bits/stdc++.h>
using namespace std;
 
void printPair(pair<int,string> *p){
  for(int i=0; i<5; i++){
    cout<<p[i].first<<" "<<p[i].second<<endl;
  }
} 

int main(){
  pair<int,int> p;
  p = make_pair(2,3);
  cout<<p.first<<" "<<p.second<<endl;
  p = {2,3};
  cout<<p.first<<" "<<p.second<<endl;

  pair<int, string> p_array[5];
  for(int i=0; i<5; i++){
    int x;
    string y;
    cin>>x>>y;
    p_array[i] = {x, y};
  }
  printPair(p_array);
  swap(p_array[0], p_array[3]);
  printPair(p_array);

  return 0;
}