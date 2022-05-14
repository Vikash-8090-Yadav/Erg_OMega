#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.second > b.second;
}
vector<int> topKFrequent(vector<int>& nums, int k){
    // unordered_set<int> s;
    map<int,int> m;
    for(auto x :nums){
        m[x]++;
    }
    vector<pair<int,int>> p;
    for(auto &x: m){
        p.push_back(x);
    }
    vector<int> v3;
    sort(p.begin(),p.end(),cmp);
    int n=0;
    for(auto x:p){
        if(n<k){
            v3.push_back(x.first);
        }
        else{
            break;
        }
        ++n;
    }
    return v3;
}

int main(){
    int k;cin>>k;
    vector<int> v1 = {1};
    vector<int> v2 = topKFrequent(v1,k);
    for(auto x : v2){
        cout<<x<<" ";
    }
}