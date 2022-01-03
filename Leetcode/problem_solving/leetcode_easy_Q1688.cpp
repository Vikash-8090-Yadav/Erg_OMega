#include <bits/stdc++.h>
using namespace std;


int numberOfMatches(int n){
	int sum=0;
	while(n!=1){
		if(n%2){
			sum+=(n-1)/2;
			n=(n-1)/2 +1;
		}
		else{
			sum+=n/2;
			n=n/2;
		}
	}
	return sum;
}

int main(){
	cout<<numberOfMatches(7);
}