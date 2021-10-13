// full code / driver code on gfg platform 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m1;
        for(int i = 0 ; i<nums.size();++i){
            m1[nums[i]]++;    
        }
        int x1;
        for(auto x : m1){
            if(x.second>1){
                x1= x.first;
            } 
        }
        return x1;
        
    }
};

