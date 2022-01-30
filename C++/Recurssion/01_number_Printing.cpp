#include <bits/stdc++.h>
using namespace std;
/*
* Topic : recurssion , striver series 01
* created by : Vikash kumar yadav
* Time : 16:24
* date , day : 30-01-2022 , sunday
*/

void  f(int n){
	if(n==0) return;
	// cout<<n; first the value of the n will be printed before the function complete it's value 
	f(n-1);
	cout<<n; // in serial order because firstly function complete it's task
}

int main(){
	f(5);
}