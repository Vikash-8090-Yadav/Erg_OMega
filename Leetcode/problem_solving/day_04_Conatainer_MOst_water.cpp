#include <bits/stdc++.h>
using  namespace std;
int maxArea(vector<int>& height){
    int i = 0; int j = height.size()-1;
    int ans1 =0;
    while(j>i){
        ans1 = max(min(height[i],height[j])*(j-i),ans1);
        if(height[i]<height[j]){
            ++i;
        }
        else{
            --j;
        }
    }
    return ans1;
}


int main(){
    vector<int> v1={4,4,2,11,0,11,5,11,13,8};
    cout<<maxArea(v1);
}