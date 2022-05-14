#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& arr){
	int x =0;
	if(arr.size()<3) return false;
	for(int i = 0;i<arr.size();++i){
		if(arr[i]>arr[i+1]){
			// cout<<arr[i]<<" "<<arr[i+1];
			x =i;
			break;
		}
	}
	// cout<<x;
	if(x==arr.size()-1 || x == 0){
		return false;
	}
	// cout<<"hii";
	for(int i=x+1;i<arr.size();++i){
		if(arr[i]<arr[i+1]) return false;
	}

	return true;
}

int main(){
	vector<int> v1={3,5,5};
	cout<<validMountainArray(v1);

}