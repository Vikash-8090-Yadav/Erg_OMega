#include <bits/stdc++.h>
using namespace std;

int minimumCost(vector<int>& cost){
	vector<int> v1;
	if(cost.size()==0) return 0;
	if(cost.size()==1) return cost[0];
	if(cost.size() ==2) return cost[0]+cost[1];
	bool track = false;

	sort(cost.begin(),cost.end());
	if(cost.size()==4) return cost[3]+cost[2]+cost[0];
	for(int i=cost.size()-1;i>=0;--i){
		v1.push_back(cost[i]);
		if(i==0){
			// v1.push_back(cost[i-1]);
			track=true;
		}
		else{
			v1.push_back(cost[i-1]);
		}
		
		i-=2;

	}
	int sum=0;
	for(auto x : v1){
		cout<<x<<" ";
		sum+=x;
	}
	// if(track){
	// 	sum+=v1[0];
	// }
	cout<<endl;
	return sum;
}

int main(){
	vector<int> v1={2,2,3};
	cout<<minimumCost(v1);

}