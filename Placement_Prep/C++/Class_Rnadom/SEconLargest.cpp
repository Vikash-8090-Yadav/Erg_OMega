#include <bits/stdc++.h>
using namespace std;

int maxnum(vector<int> nums){
	int min = -1e9;
	for(int i = 0;i<nums.size();++i){
		if(nums[i]>min){
			min= nums[i];
		}
		else{
			continue;
		}

	}
	return min;
}


int sl(vector<int> nums){
	if( nums.size()==1){
		return nums[0];
	}
	if(nums.size()==0){
		return 0;
	}
	int max = maxnum(nums);
        //cout<<max;
        int ll = max;
        int sl = 0;
        for(int i = 0;i<nums[i];++i){
                if(nums[i]<max && nums[i]!=ll  ){
                        sl = nums[i];
                }
        }
        return sl;
}


int main(){
	vector<int> nums = {9};
	int ans = sl(nums);
	cout<<ans;

}
