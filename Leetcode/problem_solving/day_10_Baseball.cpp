#include <bits/stdc++.h>
using namespace std;
int calPoints(vector<string>& ops){
    stack<int> s;
    for(int i=0;i<ops.size();++i){
        if(ops[i]=="D"){
            int x = s.top();
            int a = x*2;
            // cout<<a<<" ";
            s.push(a);
        }
        else if(ops[i]=="C"){
            int  x = s.top();
            // cout<<x<<" ";
            s.pop();
        }
        else if(ops[i]=="+"){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            // cout<<a<<" "<<b<<" ";
            s.push(b);
            s.push(a);
            s.push(a+b);
        }
        else{
            s.push(stoi(ops[i]));
        }
    }
    int sum=0;
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    return sum;
}

int main(){
    vector<string> s={"2","3","C","D","5","6","+","C","D"};
    cout<<calPoints(s);
}


// #include <bits/stdc++.h>
// using namespace std;

// int fn(int n){
//     return n;
// }

// int main(){
    
//     fn(10);
// }

