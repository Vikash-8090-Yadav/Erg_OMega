#include <bits/stdc++.h>
using namespace std;
// string s3 ={};

void fr(string &s,char a, int k){
    for(int i = 0;i<k;++i){
        s.push_back(a);
    }
}

bool cmp(pair<char,int> &a ,pair<char,int> &b){
    return a.second >b.second;
}

string frequencySort(string s){
    map<char,int> m;
    for(auto x:s){
        m[x]++;
    }
    vector<pair<char,int>> p;
    for(auto x:m){
        p.push_back(x);
    }
    string s3;  
    sort(p.begin(),p.end(),cmp);
    for(auto x:p){
        fr(s3,x.first,x.second);
    }
    return s3;

}
int main(){
    string  s= "tree";cout<<frequencySort(s);
}