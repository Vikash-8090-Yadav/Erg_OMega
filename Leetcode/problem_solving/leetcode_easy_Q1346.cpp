#include <bits/stdc++.h>
using namespace std;
bool checkIfExist(vector<int>& arr){
	for(int i=0;i<arr.size();++i){
		for(int j=0;j<arr.size();++j){
			if(i!=j && arr[i] == 2*arr[j]) return true;
		}
	}
	return false;
}


int main(){
	vector<int> v={10,2,5,3};
	cout<<checkIfExist(v);
}