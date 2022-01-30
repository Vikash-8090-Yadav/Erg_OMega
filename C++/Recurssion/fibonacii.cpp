#include <bits/stdc++.h>
using namespace std;

/*
* topic : multiple recurssion call's
* Created by vikash 
* Time : 15:15
* Day and date : sunday , 30-01-2022
*/

// i^st test case : 0 1 1 2 3 5 
int fib(int n){
	if(n==0 || n==1) return n;   // base case
	int ans1 = fib(n-1);
	int ans2 = fib(n-2);
	return ans2+ans1;
}
int main(){
	int n;cin>>n;
	cout<<fib(5);

}