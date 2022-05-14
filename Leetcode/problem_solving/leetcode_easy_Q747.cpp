#include <bits/stdc++.h>
using namespace std;
int dominantIndex(vector<int>& nums){
	if(nums.size()==1) return 0;
	sort(nums.begin(),nums.end());
	int x = nums[nums.size()-1];
	for(int i=0;i<nums.size()-1;++i){
		if(x!=nums[i]*2 && x<nums[i]*2 ) return -1;
	}
	return 1;
}
int main(){
	vector<int> nums = {3};
	cout<<dominantIndex(nums);
}