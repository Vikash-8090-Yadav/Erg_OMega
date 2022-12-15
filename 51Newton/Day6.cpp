#include <bits/stdc++.h>
using namespace std;


int main(){

  int n,m;cin>>n>>m;
  vector<int> col(m+1,-1);
  vector<int> row(n+1,-1);
  n =n+1;
  // vector<vector<string>> str(n);
  vector<string> ans;

  // string s[n][];
  vector<string> str;
  // vector<string> new_str;
  // cout<<s[0][0];
  int ind =0;
  while(n--){
    // cin.ignore();
    string new_str;
    string c2;
     string c;getline(cin,c);
     for(auto x :c){
       if(x ==' ')continue;
       else{
         new_str+=x;
       }
     }
    str.push_back(new_str);

}
//
//   for(int i = 1;i<str.size();++i){
//     for(int j = 0; j<str[i].size();++j){
//       cout<<str[i][j];
//     }
//     cout<<endl;
//   }
// //
// cout<<str[1][0];

// // col(str);
// // -1 ->red , 0->  blue
// // cout<<str[0][0];

// vector<int> row(n-1,-1);
// row.fill(-1);
//
for(int i = 1;i<str.size();++i){
  for(int j = 0; j<str[i].size();++j){
    if(str[i][j]=='.' && col[j]!=0){
      col[j]=-1;
    }
    else{
      col[j] =0;
    }
  }
}

for(int i = 1;i<str.size();++i){
  for(int j = 0; j<str[i].size();++j){
    if(str[i][j]=='.'){

      if(row[i-1]!=0) row[i-1] = -1;
    }
    else{
      // cout<<"h";
      row[i-1] = 0;
    }
  }
}
// // //
// for(auto x: col){
//   cout<<x<<" ";
// }
// cout<<endl;
//
// for(auto x: row){
//   cout<<x<<" ";
// }
//
// // // cout<<endl;
for(int i = 1;i<str.size();++i){
  string ns;
  for(int j = 0; j<str[i].size();++j){
    if(row[i-1] ==0 && col[j]==0){
      ns+=(str[i][j]);
    }
  }
  if(ns == ""){
    continue;
  }
  else ans.push_back(ns);
  ns ="";
}
for(int i = 0;i<ans.size();++i){
  for(int j = 0; j<ans[i].size();++j){
    cout<<ans[i][j];
  }
  cout<<endl;
}



}
