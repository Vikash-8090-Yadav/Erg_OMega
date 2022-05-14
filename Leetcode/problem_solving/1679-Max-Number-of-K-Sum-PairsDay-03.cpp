#include <bits/stdc++.h>
using namespace std;
int maxOperations(vector<int>& nums, int k){
    int i =0;int j = nums.size()-1;
    int cnt=0;
    while(j>i){
        if((nums[i]+nums[j]) ==k ){
            cnt++;
        }
        else if((nums[i]+nums[j]) >k){
            --j;
        }
        else{
            ++i;
        }
    }
    return cnt;
}
int main(){
    vector<int> nums = {1,2,3,4};
    int k = 5;
    int x = maxOperations(nums,k);
    cout<<x;
}