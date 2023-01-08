#include <bits/stdc++.h>
using namespace std;

int main(){
  int  N,X;
  cin>>N>>X;
  vector<int> vals;
	for(int i =0;i<N;++i){
		int x;cin>>x;
		vals.push_back(x);
	}
	int sbit;
			 for(sbit=41;sbit>=0;sbit--){
					 if(((X>>sbit)&1L)==1){
							 break;
					 }
			 }
			 long req1=0L;
			 while(sbit>=0){
					 int count=0;
					 for(int i=0;i<N;i++){
							 if(((vals[i]>>sbit)&1L)==1){
									 count++;
							 }
					 }
					 if(2*count<N){
							 if(req1+(1L<<sbit)<=X){
									 req1|=(1L<<sbit);
							 }
					 }
					 sbit--;
			 }
			 long ans1=0L;
			 for(int i=0;i<N;i++){
					 ans1+=(vals[i]^req1);
			 }
			 cout<<(ans1);


}
