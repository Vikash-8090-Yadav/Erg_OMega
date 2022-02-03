#include <bits/stdc++.h>
using namespace std;

/*
* topic : priting sebsequnece of the int array
* created by : Vikash kumar yadav
* time : 17:31
* date : 31-01-22
* day : monday
*/
void printf(int n,vector<int> arr , vector<int> v1 , int index){
	if(index == n){
		if(v1.size()==0){
			cout<<"{}";
			cout<<endl;
			return;
		}
		for(auto x : v1){
			cout<<x;
		}
		cout<<endl;
		return;
	}
	// pick condition
	v1.push_back(arr[index]);
	printf(n,arr,v1,index+1);
	// not pick condition
	v1.pop_back();
	printf(n,arr,v1,index+1);
}
int main(){	
	int n =3;
	vector<int> arr={3,1,2};
	vector<int> v1;
	int index = 0;
	printf(n,arr,v1,index);


}