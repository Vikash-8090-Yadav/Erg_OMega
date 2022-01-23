#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums){
	vector<int> v1,v2,v3;
	for(int i=0;i<nums.size();++i){
		if(nums[i]<0){
			v1.push_back(nums[i]);
		}
		else{

			v2.push_back(nums[i]);
		}
	}
	int i = 0; int j=0;
	while(i<v1.size()){
		v3.push_back(v2[i++]);
		v3.push_back(v1[j++]);
	}
	return v3;
}

int main(){
	vector<int> v ={-1,1};
	vector<int> nums =rearrangeArray(v);
	for(auto x : nums){
		cout<<x<<" ";
	}
}