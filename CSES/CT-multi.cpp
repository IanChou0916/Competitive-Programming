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
	multiset<ll> st;
	for(int i=0;i<n;i++){
		ll x;
		cin >> x;
		st.insert(x);
	}
	for(int i=0;i<m;i++){
		ll ans;
		cin >> ans;
		if(n == 0 || ans<*st.begin()){cout << "-1\n";}
		else {
		
		auto it = (st.upper_bound(ans));
		it--;
		cout << *it<< "\n";
		st.erase(st.find(*it));
		n--;
		}
	}
		
	return 0;
}