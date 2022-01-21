#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence){
	set<char> s;
	for(auto x :sentence){
		s.insert(x);
	}
	if(s.size()==26){
		return true;
	}
	return false;
}

int main(){
	string s ={"leetcode"};
	cout<<checkIfPangram(s);
}