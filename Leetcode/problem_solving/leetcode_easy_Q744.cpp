#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target){
    char c[2];
    if(target == 'z'){
        return letters[0];
    }
    for(auto x : letters){
        if(int(x) >int(target)){
            // cout<<x<<" ";
            c[0] = x;
            break;

        }
    }
    return c[0];

}

int main(){
    char tar = 'd';
    vector<char> c={'c','f','j'};
    // int val = int(c[1]);
    // // cout<<val;
    // for(auto x : c){
    //     if(int(x)>int(tar)){
    //         cout<<x<<" ";
    //         break;
    //     }
    // }
    cout<<nextGreatestLetter(c,tar);
}