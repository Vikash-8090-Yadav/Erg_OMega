#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s){
	int i = s.size()-1;
	while(s[i] == ' '){
		s.pop_back();
		--i;
	}
	int cnt =0;
	for(int i = s.size()-1;i>=0;--i){
		if(s[i]==' '){
			break;
		}
		else{
			cnt++;
		}
	}
	return cnt;
}

int main(){
	string s={"luffy is still joyboy"};
	cout<<lengthOfLastWord(s);
}