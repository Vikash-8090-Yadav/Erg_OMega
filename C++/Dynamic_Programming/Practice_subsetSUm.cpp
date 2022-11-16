#include <bits/stdc++.h>
using namespace std ;

int subset_sum(vector<int> nums, int k,int i ){
  if(k ==0) return 1;
  if(i==0){
    return (nums[0]==k);
  }

  int ntake = subset_sum(nums,k,i-1);

  int take=0;

  if(k>=nums[i]){
    take = subset_sum(nums,k-nums[i],i-1);
  }
  return take|| ntake;
}




int subset_k_memo(vector<int> nums , vector<vector<int>> dp ,int k , int i ){

  if(k ==0) return 1;
  if(i==0){
    return (nums[0]==k);
  }


  if(dp[i][k]!=-1) return dp[i][k];


  int ntake = subset_k_memo(nums,k,i-1);

  int take=0;

  if(k>=nums[i]){
    take = subset_k_memo(nums,k-nums[i],i-1);
  }
  return dp[nums.size()-1][k] = take|| ntake;

}


int main(){
  vector<int> nums = {16,18,2,4,2};
  int target = 8  ;

  cout<<subset_sum(nums,target,nums.size()-1);
  cout<<subset_k_memo(nums,dp,target,nums.size()-1);
}
