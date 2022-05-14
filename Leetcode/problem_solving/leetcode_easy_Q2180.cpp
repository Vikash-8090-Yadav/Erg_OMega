#include <bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    if(n==0) return 0;
    return digit_sum(n/10)+(n%10);
 }
int main(){	
	int n;cin>>n;
	int cnt=0;
	for(int i=1;i<=n;++i){
		if(digit_sum(i)%2==0){
			cnt++;
		}
	}
	cout<<cnt;
}