#include <bits/stdc++.h>
using namespace std;

string interpret(string command){
	for(int i = 0;i<command.size();++i){
		if(command[i] == "()"){
			command[i] = 'o';
		}
	}
	return command;
	// if(command[])
}


int main(){
	string s = {"G()(al)"};
	cout<<interpret(s); 
	
	
}