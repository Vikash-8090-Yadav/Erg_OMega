#include <bits/stdc++.h>
using namespace std;


int minum_ele(int ind , int target , vector<int> nums){
  //  Base casee
  if(ind==0){
    if(target%nums[0]==0) return target/nums[0];
    else return 1e9;
  }


  int ntake = 0+minum_ele(ind-1,target,nums);
  int take = INT_MAX;
  if(nums[ind]<=target){
    take = 1+minum_ele(ind,target-nums[ind],nums);
  }
  return min(take,ntake);
}

// Tabulation

int minum_ele_memo(int ind , int target , vector<int> nums,vector<vector<int>> dp){
  //  Base casee
  if(ind==0){
    if(target%nums[0]==0) return target/nums[0];
    else return 1e9;
  }

  if(dp[ind][target]!=-1) return dp[ind][target];
  int ntake = 0+minum_ele(ind-1,target,nums);
  int take = INT_MAX;
  if(nums[ind]<=target){
    take = 1+minum_ele(ind,target-nums[ind],nums);
  }
  return dp[ind][target]=min(take,ntake);
}

// Tabulation

int minum_ele_tabulation(int ind , int target,vector<int> nums){
  vector<vector<int>> dp(nums.size(),vector<int>(target+1,0));
  for(int i = 0; i<=target;++i){
    if(i%nums[0]==0){
      dp[0][i] = i/nums[0];
    }
    else{
      dp[0][i] = 1e9;
    }
  }
  for(int i =1;i<nums.size();++i){
    for(int j = 0;j<=target;++j){
      int ntake = 0+dp[i-1][j];
      int take = INT_MAX;
      if(nums[i]<=j){
        take = 1+dp[i][j-nums[i]];
      }
      dp[i][j]=min(take,ntake);
    }
  }
  return dp[nums.size()-1][target];
}

int main(){
  int target = 30;
  vector<int> nums = {9,6,5,1};

  cout<<minum_ele(3,target,nums);

  vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
  cout<<endl;
  cout<<minum_ele_memo(3,target,nums,dp);
  cout<<endl;
  cout<<minum_ele_tabulation(3,target,nums);
}
