#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  vector<int> arr;
  for(int i = 0;i<n;++i){
    int x;cin>>x;
    arr.push_back(x);
  }
  sort(arr.begin(),arr.end());
  int sum=0;
  for(int i =0;i<n-1;++i){
    sum+=arr[i];
  }

  if(sum>arr[n-1]){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }

}
