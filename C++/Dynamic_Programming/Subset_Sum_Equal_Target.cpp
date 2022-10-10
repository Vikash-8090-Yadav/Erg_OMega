#include <bits/stdc++.h>
using namespace std;


bool subseet_sum_chk(vector<int> nums,int target, int ind){
  if(ind<0){
    return (nums[0]==0);
  }
  if(target ==0) return true;
  bool ntake = subseet_sum_chk(nums,target ,ind-1);

  bool take = false;

  if(nums[ind]<=target){
    take = subseet_sum_chk(nums,target-nums[ind],ind-1);
  }
  return take | ntake;
}


//  Applying memoziation

bool susbet_memo(vector<int> nums , int target , int ind , vector<vector<int>> dp){
  if(ind<0){
    return (nums[0]==0);
  }
  if(target ==0){
    return true;
  }

  if(dp[ind][target]!=-1) return dp[ind][target];

  int ntake = susbet_memo(nums,target,ind-1,dp);

  bool take  = false;

  if(nums[ind]<=target){
    take = susbet_memo(nums,target-nums[ind],ind-1,dp);
  }
  return dp[ind][target] = take|ntake;
}


//  Tabulation 


int main(){
  vector<int> nums={1,2,3,4};
  int k=4;
  cout<<subseet_sum_chk(nums,k,3);

  vector<vector<int>> dp(nums.size(),vector<int>(k+1,-1));
  cout<<endl;
  cout<<susbet_memo(nums,k,3,dp);
}
