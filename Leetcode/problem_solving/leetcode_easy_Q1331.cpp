#include <bits/stdc++.h>
using namespace std;
/**
* author :created by vikash 
* time :22:59pm
* date : 23-01-22
*/


vector<int> arrayRankTransform(vector<int>& arr){
	set<int> s;
	map<int,int> m;
	vector<int> v2,v3;
	for(auto x : arr){
		s.insert(x);
	}
	for(auto x :s){
		v2.push_back(x);
	}
	for(int i = 0;i<v2.size();++i){
		m[v2[i]] = i+1;
	}
	// for(auto x : m){
	// 	cout<<x.first<<" "<<x.second<<" ";
	// }
	cout<<endl;
	for(int  i = 0;i<arr.size();++i){
		v3.push_back(m[arr[i]]);
	}
	return v3;

}

int main(){
	vector<int> v ={100,100,100};
	v = arrayRankTransform(v);
	for(auto x : v){
		cout<<x<<" ";
	}
}