#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
	if(s.size()==0) return true;
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