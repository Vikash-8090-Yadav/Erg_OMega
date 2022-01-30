#include <bits/stdc++.h>
using namespace std;
/*
* topic : subsequence striver recurssion series
* date : 30-01-22
* time and day : 18:40 , sunday
*/

void stringp(int i, vector<string> c , vector<string> v1 , int n){
	if(i==n){
		for(auto x : v1){
			cout<<x<<" ";
		}
		cout<<endl;
		return;
	}
	c.push_back(v1[i]);
	stringp(i+1,c,v1,n);
	c.pop_back(v1[i]);
	stringp(i+1,c,v1,n);

}

int main(){
	vector<string> v1 = {"abcd"};
	int n = 4;
	int i = 0;
	vector<string> c;
	stringp(i, c,v1,n); 
}