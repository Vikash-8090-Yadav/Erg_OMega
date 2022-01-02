#include <bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
	vector<char> s1,s2={};

	for(auto x : word1){
		for(auto x1: x){
			s1.push_back(x1);
			
		}
	}
	for(auto x : word2){
		for(auto x1: x){
			s2.push_back(x1);
			
		}
	}
	return (s1==s2);
	
	// cin>>s1;
	// cout<<s1;
}

int main(){
	vector<string> word1 = {"a", "cb"};
	vector<string> word2 = {"a", "bc"};
	cout<<arrayStringsAreEqual(word1, word2);
}