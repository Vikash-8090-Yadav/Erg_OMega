#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums){
	int len = nums.size();
	vector<int> v2;
	unordered_map<int,int> m;
	for(auto x : nums){
		m[x]++;
	}
	for(int i =1;i<=len;++i){
		if(m[i]==0){
			v2.push_back(i);
		}
	}
	return v2;
}

int main(){
	vector<int> v1 ={1,1};
	vector<int> v2 =findDisappearedNumbers(v1);
	for(auto x : v2){
		cout<<x<<" ";
	}
}