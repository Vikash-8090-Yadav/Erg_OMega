#include <bits/stdc++.h>
using namespace std;


int fn(vector<int> wt , vector<int> val,int re_wt,int ind){
  if(ind<0){
    if(wt[0]>re_wt){
      return 0;
    }
    else{
      return val[0];
    }
  }
  int ntake  = fn(wt,val,re_wt,ind-1);
  int take = INT_MIN;
  if(re_wt>=wt[ind]){
    take = val[ind]+fn(wt,val,re_wt-wt[ind],ind-1);
  }
  return max(take,ntake);
}


// Mmeoziation


int fn_memo(vector<int> wt , vector<int> val,int re_wt,int ind,vector<vector<int>> dp){
  if(ind<0){
    if(wt[0]>re_wt){
      return 0;
    }
    else{
      return val[0];
    }
  }

  if(dp[ind][re_wt]!=-1) return dp[ind][re_wt];
  int ntake  = fn(wt,val,re_wt,ind-1);
  int take = INT_MIN;
  if(re_wt>=wt[ind]){
    take = val[ind]+fn(wt,val,re_wt-wt[ind],ind-1);
  }
  return dp[ind][re_wt] = max(take,ntake);
}


int main(){
  vector<int> wt = {3,4,5};
  vector<int> val = {30,50,60};
  int restricted_weight =8;

  cout<<fn(wt,val,restricted_weight,2);
  cout<<endl;
  vector<vector<int>> dp(wt.size(),vector<int>(restricted_weight+1,-1));
  cout<<fn_memo(wt,val,restricted_weight,2,dp);
}
