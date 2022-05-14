#include <bits/stdc++.h>
using namespace std;

vector<int> findLonely(vector<int>& nums){
	vector<bool> arr(1e5,false);
	for(int i = 0;i<int(nums.size());++i){
		arr[nums[i]] = true;
	}
	map<int ,int> m;
	for(auto x : nums){
		m[x]++;
	}
	vector<int> v2;
	for(auto x : m){
		if(!(arr[(x.first)-1] || arr[(x.first)+1]) && x.second==1){
			v2.push_back(x.first);

		}
	}
	return v2;

}

int main(){
	vector<int> v1={61,83,92,92,42,60,16,45,32,14,40,7,10,34,62,33,65,79,7,14,85,21,36,5,99,25,0,14,52,41,40};
	vector<int> v3 = findLonely(v1);
	for(auto x : v3){
		cout<<x<<" ";
	}
}