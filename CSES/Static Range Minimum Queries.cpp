// Problem: Static Range Minimum Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1647
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize(2)
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define X first
#define Y second
#define pii pair<int,int>	
#define pr(_) cout << fixed << setprecision(_)
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
#define see(_) cerr << _ << "\n";
typedef long long ll;

int main(void){
	penguin
	int n,q;
	cin >> n >>q;
	vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	while(q--){
		int a,b;
		cin >> a >> b;
		ll ans=1e9;
		for(int i=a-1;i<=b-1;i++){
			ans = min(ans,v[i]);
		}
		cout << ans <<"\n";
	}
	return 0;
}