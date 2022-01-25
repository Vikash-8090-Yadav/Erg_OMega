#include <bits/stdc++.h>
using namespace std;

int binary_search(int key ,vector<int> v1){
	int l = v1.size()-1;
	int r=0;
	// int mid = (r+l)/2;
	while(l>=r){
		int mid = (r+l)/2;
		if(v1[mid]==key){
			return mid;
		}
		else if(key>v1[mid]){
			r = mid+1;


		}
		else{
			l =  mid-1;
		}
	}
	return -1;
}

int main(){
	vector<int> v1={2,3,4,5,6,7,8};
	cout<<binary_search(3,v1);
}