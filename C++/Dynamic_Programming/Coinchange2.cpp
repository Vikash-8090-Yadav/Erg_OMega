#include <bits/stdc++.h>
using namespace std;

// Recurssion

int fn(vector<int> nums , int target,int ind){
  if(ind==0){
    return target%nums[0]==0;
  }
  int ntake = fn(nums,target,ind-1);

  int take = 0;

  if(nums[ind]<=target){
    take = fn(nums,target-nums[ind],ind);
  }
  return ntake+take;
}

// Memoziation

int fn_mmeo(vector<int> nums , int target,int ind,vector<vector<int>> dp){
  if(ind==0){
      return target%nums[0]==0;
  }
  if(dp[ind][target]!=-1) return dp[ind][target];
  int ntake = fn(nums,target,ind-1);

  int take = 0;

  if(nums[ind]<=target){
    take = fn(nums,target-nums[ind],ind);
  }
  return  dp[ind][target]= ntake+take;
}


// Tabulation

int fn_tabulation(vector<int> nums , int target){
  vector<vector<int>> dp(nums.size(),vector<int>(target+1,0));

  for(int i = 0; i<=target;++i){
    dp[0][i] = (i%nums[0]==0);
  }
  for(int ind =1;ind<nums.size();++ind){
    for(int j = 0;j<=target;++j){
      int ntake = dp[ind-1][j];

      int take = 0;

      if(nums[ind]<=j){
        take = dp[ind][j-nums[ind]];
      }
      dp[ind][j]=ntake+take;

    }
  }
  return dp[nums.size()-1][target];
}





int main(){
  vector<int> nums ={1,2,3};
  int target = 4;
  cout<<fn(nums,target,2);
  vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
  cout<<endl;
  cout<<fn_mmeo(nums ,target ,2, dp);

  cout<<endl;
  cout<<fn_tabulation(nums,4);
}
