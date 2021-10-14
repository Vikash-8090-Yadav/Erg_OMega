#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v1(n);
		for(int i =0;i<n;++i){
			cin>>v1[i];
		}
		sort(v1.begin() , v1.end());
		if(v1[n-1] == v1[n-2]){
			cout<<"fight:("<<endl;
		}
		else {
			cout<<"peace:)"<<endl;
		}
		// cout<<endl;

	}
	// cout<<endl;	
}
