#include <bits/stdc++.h>
using namespace std;

bool solve(int a , int b , vector<int> arr){
  bool flag1 = false;bool flag2 = false;
  for(int i = 0;i<arr.size();++i){
    if(a==arr[i]){
      flag1 = true;
    }
    else if(b==arr[i]){
      flag2 = true;
    }
  }
  return (flag1 && flag2);
}

int main(){
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(3);
  arr.push_back(5);
  arr.push_back(7);
  arr.push_back(8);
  arr.push_back(10);
  arr.push_back(12);
  vector<int> arr1;

  arr1.push_back(4);
  arr1.push_back(6);
  arr1.push_back(9);
  arr1.push_back(11);
  vector<int> arr3;

  arr3.push_back(2);
  int a,b;cin>>a>>b;
  bool ans1 = solve(a,b,arr);
  bool ans2 = solve(a,b,arr3);
  bool ans3 = solve(a,b,arr1);

  if(ans1 || ans2 || ans3){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
}
