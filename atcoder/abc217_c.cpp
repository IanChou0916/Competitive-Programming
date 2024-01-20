// Problem: C - Inverse of Permutation
// Contest: AtCoder - AtCoder Beginner Contest 217
// URL: https://atcoder.jp/contests/abc217/tasks/abc217_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>	
#define pr(_) cout << fixed << setprecision(_)
#define see(_) cerr << _ << "\n";
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
typedef long long ll;


int main(void){
	penguin
	ll n;
	cin >> n;
	vector<int> v(n);
	vector<int> q(n);
	for(int &x:v) cin >> x;
	for(int i=0;i<n;i++){
		q[v[i]] = i+1;
		see(v[i])
	}
	for(int i=1;i<=n;i++){
		if(i!= 1) cout << " ";
		cout << q[i];
	}
	cout << "\n";
	return 0;
}