#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  vector<int> arr;
  for(int i =0;i<n;++i){
    int x;cin>>x;arr.push_back(x);
  }
  int curmax=arr[0];
       long sum,prev=0L,total=0L;
       for(int i=0;i<n;i++){
           curmax=max(curmax,arr[i]);
           //curmax will be added n times
           total+=arr[i];
           sum=(i+1L)*curmax;
           prev=prev+total;
           cout<<sum+prev<<endl;
}
}


//
// Tried prefix sum but failed
// int main(){
//   int n;cin>>n;
//   vector<int> arr;
//   for(int i =0;i<n;++i){
//     int x;cin>>x;arr.push_back(x);
//   }
//   vector<int> prefix(n);
//   prefix[0] = arr[0];
//   // cout<<prefix[0]<<endl;
//   for(int i = 1;i<n;++i){
//     prefix[i] =prefix[i-1]+arr[i];
//   }
//   vector<int> new_prefix(n);
//   new_prefix[0] = prefix[0];
//   for(int i = 1;i<n;++i){
//     new_prefix[i] =new_prefix[i-1]+prefix[i];
//   }
//   // for(auto x : prefix){
//   //   cout<<x<<" ";
//   // }
//   int final_ans=0;
//   for(int i = 0;i<n;++i){
//     int ans = arr[i]*(i+1);
//     if(i==0){
//       final_ans = ans+new_prefix[i];
//     }
//     else if (i>0 && arr[i]>arr[i-1]){
//       final_ans = ans+new_prefix[i];
//
//     }
//     else{
//       final_ans = ans+new_prefix[i]+i+1;
//     }
//     cout<<final_ans<<endl;
//   }
// }
