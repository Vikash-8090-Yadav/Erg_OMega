#include <bits/stdc++.h>
using namespace std;
int thirdMax(vector<int>& nums){
	set<int> s;
	for(auto x : nums){
		s.insert(x);
	}
	vector<int> v1;
	for(auto x : s){
		v1.push_back(x);
		// cout<<x<<" ";
	}
	// int x = s[1];
	if(s.size()<3){
		return v1[v1.size()-1];
	}
	else{
		return v1[(v1.size()-1)-2];
	}
}

int main(){
	vector<int> v1={2,2,3,1};
	cout<<thirdMax(v1); 
}