#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n ;cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;++i){
			cin>>v[i];
			}
			int od=0,even=0;
			for(int i =0;i<n;++i){
				if(i%2 && v[i]%2==0){
					od++;
					}
				if(i%2==0 && v[i]%2){
					even++;
					}
				}
				if(od==even){
					cout<<od<<endl;
				}
				else if(od!=even){
					cout<<-1<<endl;
				}
				else{
					cout<<0<<endl;
				}
		}
	}