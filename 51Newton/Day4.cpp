#include <bits/stdc++.h>

using namespace std;

int main(){

  int n ;cin>>n;
  map<int,int> m;

  vector<int> arr;
  for(int i =0;i<n-1;++i){
    int x;cin>>x;
    m[x]++;
    arr.push_back(x);
  }

  for(int i = 1 ; i<=n;++i){
    cout<<m[i]<<endl;
  }
}
