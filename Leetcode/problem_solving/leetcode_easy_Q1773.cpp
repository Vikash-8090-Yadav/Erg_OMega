#include <bits/stdc++.h>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue){
    int n1 =0;
        
    for(auto x : items){
    	cout<<x[1]<<endl;
        if(ruleKey == "type" && x[0] =="ruleValue){
           // x[0] =="ruleValue";
           n1++;
           cout<<x[1]<<" ";
          }
        else if( ruleKey == "color" && x[1] == ruleValue){
            // x[1] == "ruleValue";
            cout<<x[1]<<" ";
            n1++;
        }
        else if ( ruleKey == "name" && x[2] =="ruleValue"){
            // x[2] =="ruleValue";
            n1++;
                
        }
    }
    return n1;
        
 }




int main(){
	vector<vector<string>> s = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};

	string ruleValue , ruleKey;
	ruleKey = "color", ruleValue = "silver";	
	cout<<countMatches(s,ruleKey,ruleValue);

}