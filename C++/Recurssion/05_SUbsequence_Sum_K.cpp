#include <bits/stdc++.h>
using namespace std;
/*
* Topic : Prinitng the number of subsequence which sum's to k 
* craeted by : Vikash kumar yadav 
* time : 17-59
* date, day : 31-01-22, monday
*/

void printf(int k,int sum ,int n,int i, vector<int> arr , vector<int> v1){
	
	if(i==n){
		if(k==sum){
			for(auto x : v1){
				cout<<x;
			}
			cout<<endl;
			return;b
		}
	}
	v1.push_back(arr[i]);
	sum+=arr[i];
	printf(k,sum,n,i+1,arr,v1);
	v1.pop_back();
	sum-=arr[i];
	printf(k,sum,n,i+1,arr,v1);
}

int main(){
	int k=2;
	int n=3;
	int i=0;
	vector<int> arr = {3,1,2};
	vector<int> v1;
	printf(k,0,n,i,arr,v1);

}