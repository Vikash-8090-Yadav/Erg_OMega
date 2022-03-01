#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	bool track = true;
	vector<int> v1(n);
	for(int i =0;i<n;++i){
		cin>>v1[i];
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i!=j && abs(v1[i] -v1[j])>1){
				// track = false;
				// break;
				cout<<"NO";
				return;
			}
		}
	}
	cout<<"YES";
	return;

}

int main(){
	int t;cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}