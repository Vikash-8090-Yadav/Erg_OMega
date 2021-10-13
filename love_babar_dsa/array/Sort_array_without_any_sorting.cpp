#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> v1(n);
	for( int i = 0 ; i<n ; ++i){
		cin>>v1[i];
	}
	vector<int> v2,v3,v4;
	// int cnt=0;int cnt1=0;int cnt2=0;
	for(int i =0 ; i<n; ++i){
		if(v1[i] == 0){
			// cnt++;
			v2.push_back(v1[i]);
		}
	}
	for(int i =0 ; i<n; ++i){
		if(v1[i] == 1){
			// cnt++;
			v2.push_back(v1[i]);
		}
	}
	for(int i =0 ; i<n; ++i){
		if(v1[i] == 2){
			// cnt++;
			v2.push_back(v1[i]);
		}
	}


	
	for(int i = 0 ; i<n; ++i){
		v1[i] = v2[i];
	}
	for(auto x : v1){
		cout<<x<<" ";
	}
	
	
}