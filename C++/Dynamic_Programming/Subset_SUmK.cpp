#include <bits/stdc++.h>
using namespace std;


int subset_k(vector<int> nums , int  target,int ind){
  if(target ==0){
    return 1;
  }
  if(ind==0){
    return (nums[0]==target);
  }
  int ntake = subset_k(nums,target,ind-1);
  int take = 0;

  if(nums[ind]<=target){
    take = subset_k(nums,target-nums[ind],ind-1);
  }

  return take+ntake;


}

//Memoziation

int subset_k_Memo(vector<int> nums , int  target,int ind,vector<vector<int>> dp){
  if(target ==0){
    return 1;
  }
  if(ind==0){
    return (nums[0]==target);
  }

  if(dp[ind][target]!=-1) return dp[ind][target];
  int ntake = subset_k(nums,target,ind-1);
  int take = 0;

  if(nums[ind]<=target){
    take = subset_k(nums,target-nums[ind],ind-1);
  }

  return dp[nums.size()-1][target]=take+ntake;


}

// Tabulation


int subse_tabulation(vector<int> nums , int  target){

  vector<vector<int>> dp(nums.size(),vector<int>(target+1,0));

  for(int i = 0;i<nums.size();++i){
    dp[i][0]=1;
  }
  if(nums[0]<=target)dp[0][nums[0]] = 1;

  for(int i = 1;i<nums.size();++i){
    for(int new_target = 1;new_target<=target;++new_target){
      int ntake = dp[i-1][new_target];
      int take = 0;
      if(nums[i]<=new_target){
        take = dp[i-1][new_target-nums[i]];
      }
      dp[i][new_target] = take+ntake;
    }
  }
  return dp[nums.size()-1][target];
}



int main(){
  vector<int> nums = {6,8,2,4,2};

  int target = 8;
  vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
  cout<<subset_k(nums,target,4);

  cout<<endl;

  cout<<subset_k_Memo(nums,target,4,dp);

  cout<<endl;
  cout<<subse_tabulation(nums,target);
}
