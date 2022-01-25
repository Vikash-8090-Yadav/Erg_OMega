#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> mat , int target){
	for(int i =0;i<mat.size();++i){
		for(int j =0;j<mat[i].size();++j){
			if(mat[i][j] == target){
				return true;
			}
		}
	}
	return false;
}

int main(){
	vector<vector<int>> v1 = {{1},{3}};
	cout<<search(v1,3);
}			


