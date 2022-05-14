#include <bits/stdc++.h>
using namespace std;
bool palind(string s){
    int i = 0; int j = s.size()-1;
    while(j>i){
        if(s[i]!=s[j]){
            return false;
        }
        --j;++i;
    }
    return true;

}

bool push(string s,int i ){
    string s1;
    for(int i1 = 0;i1<s.size();++i1){
        if(i!=i1){
            s1.push_back(s[i1]);
        }
    }
    return palind(s1);
}

bool validPalindrome(string s){
    int i = 0; int j = s.size()-1;
    // cout<<j<<" ";
    while(j>i){
        if(s[i]!=s[j]){
            // return false;
            break;
        }
        --j;++i;
    }
    // cout<<j<<" "<<i<<" ";
    bool b1= push(s,i);
    bool b2 = push(s,j);
    // bool track = true;
    if(b1||b2){
        return true;
    }
    return false;


}

int main(){
    string s="abcab";
    cout<<validPalindrome(s);
    // cout<<palind(s);
}