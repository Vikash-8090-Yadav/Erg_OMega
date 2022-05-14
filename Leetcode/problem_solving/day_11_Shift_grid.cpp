#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k){
	int n=grid.size();
	int m   = grid[0].size();
	vector<vector<int>> temp(m,vector<int>(n,0));
	for(int r=0;r<m;r++){
		for(int c=0;c<n;++c){
			int newval = ((r*n+c)+k)%(m*n);
			int newr = newval;
			int newc = newval%n;
			temp[newr][newc] = grid[r][c];
		}
	}
	return temp;
}

int main(){
	vector<vector<int>> v1 {{3,8,1,9},{19,7,2,5},{4,6,11,10},{12,0,21,13}};
	vector<vector<int>> grid = shiftGrid(v1,1);
	for(int i =0;i<grid.size();++i){
			for(int j=0;j<grid[i].size();++j){
				cout<<grid[i][j];
			}
		}

}