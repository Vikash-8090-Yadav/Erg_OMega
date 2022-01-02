#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v1(5);
	v1[1] = 2;
	v1[2] = 4;
	v1[3] = 5;
	v1[4] = 6;
	v1[1] = 0;
	v1[0] = 3;
	for(auto x : v1){
		cout<<x<<" ";
	}
}