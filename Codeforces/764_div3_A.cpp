#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v1(n);
		for(int i=0;i<n;++i){
			cin>>v1[i];
		}
		sort(v1.begin(),v1.end());
		int max = v1[v1.size()-1];
		int ans =max-v1[0];
		cout<<ans;
		cout<<endl;
	}
}