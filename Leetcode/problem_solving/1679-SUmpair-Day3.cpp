#include <bits/stdc++.h>
using namespace std;
// int maxOperations(vector<int>& nums, int k){
//     sort(nums.begin(),nums.end());
//     int i =0;int j = nums.size()-1;
//     int cnt=0;
//     while(j>i){
//         if((nums[i]+nums[j])==k){
//             ++i;--j;
//             cnt++;
//         }
//         else if((nums[i]+nums[j])>k){
//             --j;
//         }
//         else{
//             ++i;
//         }
//     }
//     return cnt;
// }

int maxOperations(vector<int> &nums,int k){
    unordered_map<int,int> m;
    int cnt=0;
    for(auto x:nums){
        if(m[k-x]){
            // m[x]--;
            m[k-x]--;   
            cnt++;
        }
        else{
            m[x]++;
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