#include <bits/stdc++.h>
using namespace std;


int frog(vector<int> nums , int ind){
  if(ind==0){
    return 0;
  }

  int one = abs(nums[ind]-nums[ind-1])+frog(nums,ind-1);
  int two = INT_MAX;
  if(ind>1){
    two = abs(nums[ind]-nums[ind-2])+frog(nums,ind-2);
  }

  return min(one , two);

}

// The  dp  -> Memoziation

int frog(vector<int> nums , int ind,vector<int> dp){
  if(ind==0){
    return 0;
  }

  int one = abs(nums[ind]-nums[ind-1])+frog(nums,ind-1);
  int two = INT_MAX;
  if(dp[ind]!=-1) return dp[ind];

  if(ind>1){
    two = abs(nums[ind]-nums[ind-2])+frog(nums,ind-2);
  }

  return dp[ind]= min(one , two);

}

// Tabulation

int frog1(vector<int> nums , int ind){
  vector<int> dp(nums.size(),0);

  dp[0] =0;
  for(int i =1 ; i<nums.size();++i){
    int one = abs(nums[i]-nums[i-1])+dp[i-1];
    int two = INT_MAX;
    if(i>1){
      two= abs(nums[i]-nums[i-2])+dp[i-2];
    }
    dp[i] = min(one,two);

  }

  for(auto x : dp){
    cout<<x<<" ";
  }
  cout<<endl;
  return dp[nums.size()-1];
}


int main(){
  vector<int> nums ={30,10,60,10,60,50};

  vector<int> dp(nums.size(),-1);
  cout<<frog(nums,5);

  cout<<frog(nums,5,dp);
  cout<<endl;
  cout<<frog1(nums,5);
}
