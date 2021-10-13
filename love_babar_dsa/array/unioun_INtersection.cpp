#include <bits/stdc++.h>
using namespace std;
int doUnion(vector<int> a, int n, vector<int> b, int m)  {
        set<int> s;
        for(int i = 0 ; i<n ; ++i){
            s.insert(a[i]);
        }
        for(int i = 0; i<m ; ++i){
            s.insert(b[i]);
        }
        // for(auto x : s){
        //     cout<<x<<" ";
        // }
        return s.size();
        //code here
    }
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;vector<int> a(n);
		int m;cin>>m;vector<int> b(m);	
		cout<<doUnion(a,n,b,m);
	}

	
	
}