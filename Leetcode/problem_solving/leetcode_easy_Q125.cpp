#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
	if(s.size()==0) return true;
	// int cnt = 0;
	// unordered_map<char,int> m;
	// set<char> ss;
	// for(auto x :s){
	// 	m[x]++;
	// 	ss.insert(x);
	// }
	// for(auto x : ss){
	// 	if(((int)s.size())%2){
	// 		if(m[x]==1){
	// 			cnt++;
	// 		}
	// 	}
	// 	else{
	// 		cout<<m[x]<<endl;
	// 		if(m[x]!=2){
	// 			return false;
	// 		}
	// 	}
	// }
	// if(cnt>1) return false;
	// return true;
	int i = 0; int j = (int)s.size()-1;
	while(i<j){
		if(s[i]==s[j]){
			++i;--j;
		}
		else{
			return false;
		}
	}
	return true;
}

string allLower(string s){
	string s1;
	for(int i = 0;i<(int)s.size();++i){
		if(((int)s[i]>=97 && (int)s[i]<=122) || ((int)s[i]>=48 && (int)s[i]<=57)){
			s1.push_back(s[i]);
		}
	}
	return s1;
}

int main(){
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	string s2 = allLower(s);
	// cout<<s2;
	// cout<<s2.size()<<endl;
	cout<<isPalindrome(s2);
}