#include <bits/stdc++.h>
using namespace std;

//knapsack(Memoziatioin)

int fn(vector<int> profit,vector<int> wt,int given_wt , int ind,vector<vector<int>> knp){
    if(ind==0){
        if(wt[0]==given_wt) return profit[0];
        else return 0;
    }
    if(knp[ind][given_wt]!=-1){
        return knp[ind][given_wt];
    }
    int ntake =0+fn(profit,wt,given_wt,ind-1,knp); 
    
    int take = -1;
    if(wt[ind]<=given_wt){
        take = profit[ind]+fn(profit,wt,given_wt-wt[ind],ind-1,knp);
    }
    return knp[ind][given_wt]= max(take,ntake);
}

// subset (Memoziatioin)

bool subset(int target , vector<int> nums,int ind,vector<vector<int>> dp){
    if(ind==0){
        return (nums[0]==target);
    }
    if(dp[ind][target]!=-1) return dp[ind][target];
    bool ntake  = subset(target,nums,ind-1,dp);
    bool take = false;
    if(nums[ind]<=target){
        take = subset(target-nums[ind],nums,ind-1,dp);
    }
    return dp[ind][target]=take | ntake;
}

// main

int main(){
    vector<int> nums={10,20,30,40};
    int target = 50;
    vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
    
    cout<<subset(target,nums,3,dp);

   
    vector<int> wt = {10,20,30};
    vector<int> profit={60,100,120};
    cout<<endl;
    int given_wt=50;
     vector<vector<int>> knp(3,vector<int>(given_wt+1,-1));
    cout<<fn(profit,wt,given_wt,2,knp);
    
}
