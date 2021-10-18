#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,co=0,ce=0,max=0;
	    cin>>n;
	    long long int a[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(i%2==0)
	        ce+=a[i];
	        else co+=a[i];
	    }
	    max=co>ce?co:ce;
	    cout<<max<<endl;
	}
	return 0;
}