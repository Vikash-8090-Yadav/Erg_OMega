#include <bits/stdc++.h>
using namespace std;
void reverse(string &s,int n){
  for(int i = n-1 ; i>=0 ; i--){
    cout<<s[i]<<" ";

  }
}
int main(){
  int t;cin>>t;
  while(t--){

    int n;cin>>n;
    string v1;
    for( int i=0 ;i<n;++i){
      cin>>v1[i];
    }
    reverse(v1,n);  
  }

}