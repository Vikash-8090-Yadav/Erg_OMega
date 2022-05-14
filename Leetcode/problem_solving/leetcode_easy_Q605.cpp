#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n){
	int i =0;
	int x=n;
	while(x!=0&& i<flowerbed.size()){
		if(flowerbed[i]!=flowerbed[i+1] && flowerbed[i+1]==flowerbed[i+2] && flowerbed[i+2]==0){
			flowerbed[i+2]=1;
			x--;
		}
		// cout<<flowerbed[i+2]<<" ";
		++i;
	}
	for(auto x :flowerbed){
		cout<<x<<" ";
	}
	for(int i =0;i<flowerbed.size();++i){
		if(flowerbed[i]==flowerbed[i+1]) return false;
	}
	// return true;
	if(x==0) return true;
	return false;

}

int main(){
	vector<int> v1={1,0,0,0,0,1};
	cout<<canPlaceFlowers(v1,2);
}