#include <bits/stdc++.h>
using namespace std;

int mostWordsFound(vector<string>& sentences){
	int n1=0;
	int n2 = 0;

	for(auto x : sentences){
		for(auto x1 :x ){
			if(x1 == ' '){
				n1++;
			}
			// cout<<x1<<" ";
		}
		if(n1 > n2){
			n2 = n1;

		}
		// cout<<n1+1<<" ";
		n1 =0;

		// for(int i = )
	}
	return n2+1;
	// cout<<n2;

}

int main(){
	vector<string> s = {"please wait","continue to fight","continue to win"};
	cout<<mostWordsFound(s);
}