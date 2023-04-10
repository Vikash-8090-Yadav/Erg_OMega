#include <bits/stdc++.h>
using namespace std;


int maximumCostSubstring(string s, string chars, vector<int>& vals) {
	map<char,char> m;
	for(int i =0;i<chars.size();++i){
		m[chars[i]]=vals[i];
	}
	int i = 0;int j=i+1;	
	vector<int> v1;
	while(j<s.size()){
		if(m[s[i]]!=0 && m[s[j]]!=0) v1.push_back(stoi(m[s[i]])+stoi(m[s[j]]));
		else if(m[s[i]]==0 and m[s[j]]==0) v1.push_back(stoi(m[s[i]])+stoi(m[s[j]]));
		else if(m[s[i]]==0 and m[s[j]]!=0) v1.push_back((stoi(m[s[i]]))+stoi(m[s[j]i]));
		else {
			v1.push_back((stoi(m[s[i]]))+stoi(m[s[j]]));
		}
		++i;++j;
	}
	for(auto x : v1){
		cout<<x<<" ";
	}
	return 1;
}


int main(){
	vector<int> v1 ={-1000};
	int a  = maximumCostSubstring("adaa", "d", v1);
	cout<<a;	
}
