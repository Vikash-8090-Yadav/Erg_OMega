   #include "bits/stdc++.h"
  #include "ext/pb_ds/assoc_container.hpp"
  
  using namespace std;
  using namespace __gnu_pbds;
  const long long N = 1e7+2;
  
  #define      int             long long
  #define      pi              (3.141592653589)
  #define      mod             1000000007
  #define      float           double
  #define      t()             int test;cin>>test;while(test--)
  #define      pb              push_back
  #define      mp              make_pair
  #define      ii              pair<int,int>  
  #define      ff              first
  #define      ss              second
  #define      all(c)          c.begin(), c.end()
  #define      fr(i, n)        for(int i=n-1;i>=0;i--)
  #define      fo(i,n)         for(int i=0;i<n;i++)
  #define      f(i,a,n)        for(int i=a;i<=n;i++)
  #define      endl            "\n"
  
  #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); 
  typedef tree< int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
  #define TRACE
  #ifdef TRACE
  #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
  template <typename Arg1>
  void __f(const char* name, Arg1&& arg1) {
      cout << name << " : " << arg1 << endl;
     
      //use cerr if u want to display at the bottom
  }
  template <typename Arg1, typename... Args>
  void __f(const char* names, Arg1&& arg1, Args&&... args) {
      const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
  }
  #else
  #define trace(...)
  #endif
  
  void init(){
  #ifndef ONLINE_JUDGE
      freopen("in.txt", "r", stdin);
      freopen("outp1.txt", "w", stdout);
  #endif
      
  }
    // to print all the prime upto the given number : checkprime();fo( i,n){if(isprimt(i){cout<<i;})} 
  vector<bool> isprime(N,true);
  void ckeckprime()
  {
    isprime[0] = isprime[1] = false;
    int i, j;
    for (i = 2; i * i < N; i++)
    {
      if (isprime[i])
      {
        for (j = i * i; j <= N; j += i)
          isprime[j] = false;
      }
    }
  }
  int digit_sum(int n){
    if(n==0) return 0;
    return digit_sum(n/10)+(n%10);
  }
  int mod_add(int a,int b,int m) {a = a % m ; b= b % m; return (((a + b) % m) + m) %m;}
  int mod_mul(int a,int b,int m) {a = a % m ; b= b % m; return (((a * b) % m) + m) %m;}
  int mod_sub(int a,int b,int m) {a = a % m ; b= b % m; return (((a - b) % m) + m) %m;}
/*----------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------------------------------------*/  
  void solve(){
  	float n;
  	cin>>n;
  	if(n==1 || n==0 || n==2){
  		cout<<"0";
  		return;
  	}
  	if(n==3){
  		cout<<"1";
  		return;
  	}
  	// float ans = round(float(n/2));
  	// trace(ans);
  	// if(float())
  	int count = round(n/2)-1;	
  	cout<<count;
  }
  int32_t main(){
    // init();
    fast
     t(){
      solve();
      cout<<endl;
     }

    return 0;
    
    
 }
  
  
  
  
  
  
  
  