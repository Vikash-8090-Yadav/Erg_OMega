#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& v1){
	 set<int> s;
        vector<int> v2;
        for(auto x:v1){
            s.insert(x);
        }
        for(auto x : s){
            v2.push_back(x);
        }
        if(s.size()==1){
            return v2[0];
        }
	while(v1.size()!=1 || v1.size()!=0){
		sort(v1.begin(),v1.end());
		int i = v1.size()-1;
		int j=i-1;
		if(v1[i]==v1[j]){
			v1.pop_back();
			v1.pop_back();
		}
		else if(v1[i]!=v1[j]){
			v1.pop_back();
			v1.pop_back();
			v1.push_back(abs(v1[i]-v1[j]));
		}
	}
	if(v1.size()==0){
			return 0;
	}
	return v1[0];
}

int main(){
	vector<int> v1 = {1,1,2};
	cout<<lastStoneWeight(v1);
}