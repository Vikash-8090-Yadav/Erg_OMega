#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int t;cin>>t;
	while(t--){
		int n, x, y ;
		cin>>n>>x>>y;
		int sum=0;
		vector<int> v1(n);
		for(int i = 0;i<n;++i){
			cin>>v1[i];
		}
		for(auto x1 : v1){
			if(x1<=x && (x1%y==0)){
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	
}