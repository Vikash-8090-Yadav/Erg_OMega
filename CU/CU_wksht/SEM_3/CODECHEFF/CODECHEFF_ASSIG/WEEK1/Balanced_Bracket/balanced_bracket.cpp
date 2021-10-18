#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,c1=0,c2=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(long long int i=0;i<n;i++)
	    {
	        if(s[i]=='(')
	        c1++;
	        else c2++;
	    }
	    long long int min;
	    min=c1<c2?c1:c2;
	    cout<<2*min<<endl;
	}
	return 0;
}