#include <bits/stdc++.h>
using namespace std;
bool isLongPressedName(string name, string typed){
	map<char,int> m1,m2;
	set<char> s;
	for(int i = 0;i<(int)name.size();++i){
		m1[name[i]]++;
		s.insert(name[i]);
	}
	for(int i = 0;i<(int)typed.size();++i){
		m2[typed[i]]++;
	}
	for(int i = 0;i<(int)s.size();++i){
		cout<<m2[name[i]]<<endl;
		if(m2[typed[i]]<m1[name[i]]){
			cout<<"hii";
			return false;
		}
	}
	for(auto x :m1){
		cout<<x.first<<" "<<x.second<<" ";
	}
	return true;
}
int main(){
	string na = {"saeed"};
	string ty = {"ssaaedd"};
	cout<<isLongPressedName(na,ty);
}