#include <bits/stdc++.h>
using namespace std;
int main(){

	int x,y,z;
  	cin>>x>>y>>z;
  	int max_x = max(x,y,z);
  	int min_x = min(x,y,z);
  	cout<<max_x- min_x;
}