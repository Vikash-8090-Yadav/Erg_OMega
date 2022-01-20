#include <bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k){
	vector<pair<int,int>> p;
	map<int,int>m;
	for(int i = 0;i<nums.size();++i){
		p.push_back({nums[i],i});
	}
	sort(p.begin(),p.end());
	for(int i = 0;i<nums.size()-1;++i){
		if(p[i].first == p[i+1].first && abs(p[i].second - p[i+1].second)<=k){
			return true;
		}
	}
	return false;
}
int main(){
	vector<int> v1={1,2,3,1};
	cout<<containsNearbyDuplicate(v1,3);
}