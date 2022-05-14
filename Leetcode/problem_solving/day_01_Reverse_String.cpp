#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s){
    int start = 0;
    int end = s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;end--;
    }

    // stack<char> s1;
    // for(auto x : s){
    //     s1.push(x);
    // }
    // s.clear();
    // while(!s1.empty()){
    //     char x = s1.top();
    //     s.push_back(x);
    //     s1.pop();
    // }
}

int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for(auto x : s){
        cout<<x<<" ";
    }
}