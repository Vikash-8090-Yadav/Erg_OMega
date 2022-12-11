#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string sol(string s){
    int len = s.size();
    string date,month;
    month.push_back(s[len-5]);
    month.push_back(s[len-4]);
    date.push_back(s[len-2]);
    date.push_back(s[len-1]);
    
    int Origanl_Date = stoi(date);
    int Origanl_Month = stoi(month);

    cout<<Origanl_Date<<" "<<Origanl_Month<<endl;

    if(Origanl_Month>9){
      return "After";
    }
    else if(Origanl_Month<9){
      return "Before";
    }
    else{
      if(Origanl_Date>=20){
        return "After";
      }
      else{
        return "Before";
      }
    }

}

int main() {
	// Your code here
    string  s;
    cin>>s;
    string ans = sol(s);
    cout<<ans<<endl;
    return 0;
}
