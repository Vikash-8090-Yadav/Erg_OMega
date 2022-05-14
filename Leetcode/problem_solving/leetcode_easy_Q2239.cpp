#include <bits/stdc++.h>
using namespace std;
vector<int> v2;
int findClosestNumber(vector<int>& nums){
    map<int,int> m;
    for(auto x:nums){
        v2.push_back(abs(x-0));
        m[abs(x)] = x;
    }
    int mn = INT_MAX;
    for(auto x : v2){
        mn = min(x,mn);
    }
    int ans=0;
    for(auto x:m){
        if(x.first == mn){
            ans = x.second;
        }
    }
    for(auto x: nums){
        if(abs(ans) == (x)){
            return x;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {3,-2};
    cout<<findClosestNumber(nums);
}