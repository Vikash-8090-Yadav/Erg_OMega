#include <bits/stdc++.h>
using namespace std;

void sum1(int i , int sum){
	if(i<0) return;
	if(i<1){
		cout<<(sum);
		return;
	}
	sum1(i-1,sum+i);

}
int main(){
	sum1(5 , 0);
}