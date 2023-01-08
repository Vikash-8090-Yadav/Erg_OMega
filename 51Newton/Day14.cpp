#include <bits/stdc++.h>
using namespace std;


int main(){
  int m = 1e9+7;
  long long  n;cin>>n;
  vector<int> arr;
  for(int i = 0;i<n;++i){
    int x;cin>>x;arr.push_back(x);
  }
  vector<long long > new_arr(n);
  new_arr[0] = arr[0];
  for(int  i =1;i<n;++i){
    new_arr[i] = new_arr[i-1]+arr[i];
  }

  int  ans = 0;
  for(int i = 0;i<n-1;++i){
     ans +=(arr[i]*(new_arr[n-1]-new_arr[i]));
     // ans%=m;
  }
  // ans%=m;
  ans  = ans%(m);
  cout<<ans;
}
