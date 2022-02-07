#include <bits/stdc++.h>
using namespace std;
long long smallestNumber(long long num){
	string s = to_string(abs(num));
	if(num>0){
		sort(s.begin(),s.end());
	}
	else sort(s.begin(),s.end(),greater<int>());
	if(num>0){
		int  ind = s.find_first_not_of('0');
		swap(s[0],s[ind]);
	}
	long long ans = stoll(s);
	if(num<0) return -1*ans;
	return ans;
}
int main(){
	cout<<smallestNumber(310);
}