#include <bits/stdc++.h>
using namespace std;
/*
* topic : functional recurssion by striver series 
* created by : Vikash kumar yadav
* date ,time : 30-01-2022 , 16:53
* day : sunday
*/


int sum_functional(int n){
	if(n==0) return 0;
	int ans = n+sum_functional(n-1);
	return ans;
}

int main(){
	cout<<sum_functional(5);
}