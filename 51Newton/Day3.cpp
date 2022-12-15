#include <bits/stdc++.h>
using namespace std;

long long  fn(vector<long long > arr  , long long  n,long long  k){

  long  long  i = 0; long long  j = 1;



  vector<long long > new_arr;
  long long  x =k-1;
  long long  total =0;
  long long  inc =0;
  while(x<arr.size()){

    if(j>x){
      new_arr.push_back(total);
      i=inc+1;
      inc =i;
      j=i+1;
      x++;
        // cout<<total<<" ";

      total=0;
    }
    total+=arr[j]-(arr[i]);


    ++i;++j;

  }
  cout<<endl;
  long long  final_i = arr.size()-k;
  for(long long  i = 0;i<=final_i;++i){
    if(new_arr[i]<0){
      int x = abs(new_arr[i]);
    new_arr[i] = x+abs(arr[i]);


    }
    else{
      new_arr[i]+=abs(arr[i]);
    }
  }
  sort(arr.begin(),arr.end());

  sort(new_arr.begin(),new_arr.end());

  // for(auto x : new_arr){
  //   cout<<x<<" ";
  // }
  cout<<endl;
  return new_arr[0];
}

int main(){
  long long  n,k;cin>>n>>k;
  vector<long long  > arr;
  for(int i =0;i<n;++i){
    int x;cin>>x;
    arr.push_back(x);
  }
  long long  ans = fn(arr,n-1,k);
  cout<<ans;
}
