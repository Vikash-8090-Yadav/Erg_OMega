#include <bits/stdc++.h>
using namespace std;
int main(){
	int sum=0;
	
	int n;cin>>n;
	vector<int> v1(n);
	for(int i =0;i<n;++i ){
		cin>>v1[i];
	}
	vector<int> v;
	
	for(auto x : v1){
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int max_e= v[v.size()-1];
	for(int i =0;i<n;++i){
		sum+=max_e-v1[i];
	}
	cout<<sum<<endl;
		
	
}