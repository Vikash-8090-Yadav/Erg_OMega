#include <bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int> & encoded , int first){
	int size = encoded.size();
	vector<int> v1(size+1);
	v1[0] = first;
	for(int i =1 ;i<=size;++i){
		v1[i] = abs(encoded[i-1] ^ v1[i-1]);
	}
	return v1;
}

int main(){
	int first;cin>>first;
	int n;cin>>n;
	vector<int> v1(n);
	for(int i =0;i<n;++i){
		cin>>v1[i];
	}
	vector<int> v2 =decode(v1,first);
	for(auto x : v2){
		cout<<x<<" ";
	}
}