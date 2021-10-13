#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int max_sum = 0;
	int current_sum = 0;
	for(int i = 0; i<n ; ++i){
		current_sum +=arr[i];
		if(current_sum <0){
			current_sum =0;
		}
		if(current_sum > max_sum){
			max_sum = current_sum;
		}
	}
	return max_sum; 
        
        // Your code here
        
    }
int main(){
	
	int n;cin>>n;int arr[n];
	for(int i = 0; i<n ; ++i){
		cin>>arr[i];
	}
	cout<<maxSubarraySum(arr,n);

	 
}