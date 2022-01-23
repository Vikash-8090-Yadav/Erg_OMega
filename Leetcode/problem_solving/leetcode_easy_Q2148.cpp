#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int>& nums){
	map<int , int> m;
	set<int> s;
	for(auto x :nums){
		s.insert(x);
		m[x]++;
	}
	vector<int> v1;
	for(auto x :s){
		v1.push_back(x);
	}
	int sum =0;
	if(m.size()<=2) return 0;
	// cout<<m.size();
	for(int i =1;i<m.size()-1;++i){
		sum+=m[v1[i]];
	}
	return sum;
}

int main(){
	vector<int> v1 ={-65,-65,50,-65,50,-55,-65,-65};
	cout<<countElements(v1);
}