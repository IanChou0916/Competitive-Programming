// Problem: B - Nuts
// Contest: AtCoder - AtCoder Beginner Contest 204
// URL: https://atcoder.jp/contests/abc204/tasks/abc204_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
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
const ll maxn = 2e5+10;
vector<ll> v(1e3);

int main(void){
	penguin
	int n;
	ll res=0;
	cin >> n;
	for(ll &x:v) cin >> x;
	for(ll i=0;i<n;i++){
		if(v[i]>10) res+=(v[i]-10); 
	}
	cout << res << "\n";
	return 0;
}