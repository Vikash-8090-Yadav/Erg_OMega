#include <bits/stdc++.h>
using namespace std;
bool checkString(string s){
    string s1 = s;
    // sort(s.begin(),s.end());
    cout<<s;
    if(s1!=s) return false;
    return true;
}

int main(){
    string s;
    cin>>s;

    sort(s.begin(),s.end());
    cout<<s;

    // cout<<checkString(s);
}