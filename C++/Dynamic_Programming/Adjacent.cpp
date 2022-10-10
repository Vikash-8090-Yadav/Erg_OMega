#include <bits/stdc++.h>
using namespace std;



int adjacent(vector<int> nums, int ind){
  if(ind==0){
    return nums[0];
  }
  int ntake = 0+adjacent(nums,ind-1);
  int take= INT_MIN;
  if(ind>1){

    take = nums[ind]+adjacent(nums,ind-2);
  }

  return  max(ntake,take);
}

// Mmeoziation


int adjacent_memo(vector<int> nums, int ind,vector<int> dp){
  if(ind==0){
    return nums[0];
  }

  if(dp[ind]!=-1) return dp[ind];
  int ntake = 0+adjacent(nums,ind-1);
  int take= INT_MIN;
  if(ind>1){

    take = nums[ind]+adjacent(nums,ind-2);
  }

  return dp[ind]= max(ntake,take);
}


// Tabulatiob

int adjacent_tabulation(vector<int> nums, int ind){
  vector<int> dp(nums.size(),0);
  dp[0] = nums[0];

  for(int i = 1 ; i<nums.size();++i){

    int ntake = 0+dp[i-1];
    int take= nums[ind];
    if(ind>1){
      take +=dp[i-2];
    }

    dp[i]= max(ntake,take);
  }
  return dp[nums.size()-1];
}


int main(){
  vector<int> nums = {1,2,4};
  // vector<int> nums = {2,1,4,9};
  vector<int> dp(nums.size(),-1);
  cout<<adjacent(nums,2);
  cout<<endl;
  cout<<adjacent_memo(nums,2,dp);
  cout<<endl;
  cout<<adjacent_tabulation(nums,2);
}
