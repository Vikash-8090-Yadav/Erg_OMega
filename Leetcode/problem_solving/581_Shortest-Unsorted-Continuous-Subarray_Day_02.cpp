#include <bits/stdc++.h>
using namespace std;

int mn(int i1 , vector<int> nums){
    int mn = INT_MAX;
    for(int i =i1; i<nums.size();++i){
        mn = min(nums[i],mn);
    }
    return mn;
}

int mx(int i1,vector<int>nums){
    int mx = INT_MIN;
    for(int i =i1; i>=0;--i){
        mx = max(nums[i],mx);
    }
    return mx;
}
int findUnsortedSubarray(vector<int>& nums){
    bool track = false;
    bool track1 = false;
    int i = 0; int j = i+1;
    while(j<nums.size()){
        int x = mn(i,nums);
        if(nums[i]>x){
            track = true;
            break;
        }
        else{
            ++i;
            ++j;
        }
    }
    int i1 = i;
    i =0; j=0;
    i =nums.size()-2;j=i+1;
    while(i>=0){
        int y = mx(i,nums);
        if(nums[j]<y){
            track1 = true;
            break;
        }
        else{
            --i;--j;
        }

    }
    if(track1 && track){
        if(i1 ==0 && j ==nums.size()-1){
            return nums.size();
        }
        else if(i1 ==0 && j!=nums.size()-1){
            // cout<<"jii";
            return (j)+1;
        }
        return(abs(i1-j)+1);
    }
    else{
        return 0;
    }
}

int main(){
    vector<int> v1 = {3,2,3,2,4};
    cout<<findUnsortedSubarray(v1);
}