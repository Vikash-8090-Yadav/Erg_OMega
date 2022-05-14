#include <bits/stdc++.h>
using namespace std;

bool find132pattern(vector<int>& nums){
    int small = nums[0];
    for(int i = 0;i<nums.size();++i){
        for(int k =k+1;k<nums.size();++k){
            if(nums[k]>small && nums[i]>nums[k]){
                return true;
            }
            small  = min(small,nums[i]);
        }
    }
    return false;
}