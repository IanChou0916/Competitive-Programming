// Problem: Stick Lengths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1074
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// Problem: Apartments
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1084
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
#define pr fixed << setprecision(2)  
//template <class T>


int n;

int main(void){
	penguin
	cin >> n;
	vector<ll> v(n);
	for(ll &x : v) cin >> x;
	sort(all(v));
	ll mid = v[n/2];
	ll res = 0;
	for(int i=0;i<n;i++){
		res+=abs(v[i]-mid);
	}
	cout << res << "\n";
	return 0;
}