#include <bits/stdc++.h>
using namespace std;


vector<int> sortEvenOdd(vector<int>&nums){
	vector<pair<int,int>> p;
	vector<int> v1;
	vector<int> v4;
	for(int i =0;i<nums.size();++i){		
		if(i%2==0){
			v4.push_back(nums[i]);
		}
		else v1.push_back(nums[i]);
	}
	map<int,int> m;
	int m1 =0;
	sort(v4.begin(),v4.end());
	for(int i =0;i<v4.size();++i){
		// p.push_back({m,v4[i]});
		m[m1] = v4[i];
		m1+=2;
	}
	int j=1;
	sort(v1.begin(),v1.end(),greater<int>());
	for(int i =0;i<v1.size();++i){
		m[j] = v1[i];

		// p.push_back({j,v1[i]});
		j+=2;
	}
	vector<int> final;
	for(int i=0;i<nums.size();++i){
		// cout<<p[i].second<<" ";
		final.push_back(m[i]);
	}
	// cout<<p[1].second<<" ";

	for(auto x : final){
		cout<<x<<" ";
	}
	return final;
}

int main(){
	vector<int> final = {4,1,2,3};
	sortEvenOdd(final);

}