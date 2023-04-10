#include <bits/stdc++.h>
using namespace std;

int minNumber(vector<int>& nums1, vector<int>& nums2) {
	sort(nums1.begin(),nums1.end());
	sort(nums2.begin(),nums2.end());
	map<int , int> m;

	int ans = nums1[0];
	int ans1 = nums2[0];

	for(auto x : nums1){
		m[x]++;
	}
	for(auto x : nums2){
		m[x]++;
	}

	for(int i = 0;i<nums1.size();++i){
		if(m[nums1[i]]>1)
		{
			return nums1[i];

		}
	}
	if(ans<=ans1) return ans*10+ans1;
	return ans1*10+ans;
          
    }

int main(){
	vector<int> nums = {3,5,2,6};
	vector<int> nums2  = {3,1,7};
	cout<<minNumber(nums,nums2);
}
