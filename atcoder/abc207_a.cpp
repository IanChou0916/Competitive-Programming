// Problem: A - Repression
// Contest: AtCoder - AtCoder Beginner Contest 207
// URL: https://atcoder.jp/contests/abc207/tasks/abc207_a
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
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
typedef long long ll;
int mod = 11;

int main(void){
	penguin
	vector<int> v(3);
	for(int &x:v) cin >> x;
	sort(all(v));
	cout << v[1]+v[2]<<"\n"
	return 0;
}