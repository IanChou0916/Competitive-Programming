// Problem: Concert Tickets
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1091
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr(_) cout << fixed << setprecision(_)
//template <class T>

int main(void){
	penguin
	ll n,m;
	cin >> n >>m;
	vector<ll> t(n);
	ll ans;
	for(ll &x:t)cin >> x;
	sort(all(t));
	//for(int &x:t)cerr << x;
	for(ll i=0;i<m;i++){
		cin >> ans;
		if(n == 0 || ans<t[0]) cout << -1 << "\n";
		//else if(ans>t[n-1]) cout << t[n-1] << "\n";
		else {
			auto it = upper_bound(all(t),ans)-1;
			//cerr << *it << "\n";
			cout << *it << "\n";
			t.erase(it);
			n--;
		}
	}
	return 0;
}