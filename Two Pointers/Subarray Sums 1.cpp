#include <bits/stdc++.h>
using namespace std;
#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
/* ------------------------------macros------------------------------------- */



void solve() {
	int n, x;
  cin>>n>>x;
  int arr[n];
  for(int i=0; i<n; i++){
	cin>>arr[i];
  }
  int sum= 0, ans = 0; 
  for(int left=0, right=0; right<n; right++){
	sum += arr[right];
	while(sum>x){
	  sum -= arr[left];  
	  left++;
	}  
	if(sum==x) ans++;
  }
  cout<<ans;


}



	


int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	while(t--) {
		solve();
	}
	


	return 0;
}
