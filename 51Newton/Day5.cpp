#include <bits/stdc++.h>
using namespace std;

int main(){
  int n  ,m;

  cin>>n>>m;
  int sum =0;
  for(int i = 0; i<m;++i){
    int x;cin>>x;
    sum+=x;
  }

  int hangout = n-sum;

  if(n<0) cout<<-1;
  else{
    cout<<hangout;
  }
}
