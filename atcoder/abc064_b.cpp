// Problem: B - Traveling AtCoDeer Problem
// Contest: AtCoder - AtCoder Beginner Contest 064
// URL: https://atcoder.jp/contests/abc064/tasks/abc064_b
// Memory Limit: 256 MB
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
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
typedef long long ll;
int mod = 11;

int main(void){
	penguin
	int n;
	cin >> n;
	vector<int> v(n);
	for(int &x:v) cin >> x;
	sort(all(v));
	cout << v[n-1] - v[0]<<"\n";
	return 0;
}