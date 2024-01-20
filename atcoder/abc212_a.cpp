// Problem: A - Alloy
// Contest: AtCoder - AtCoder Beginner Contest 212
// URL: https://atcoder.jp/contests/abc212/tasks/abc212_a
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

ll a,b;

int main(void){
	penguin
	cin >> a >> b;
	if(a>0 && b == 0) cout << "Gold\n";
	else if(a == 0 && b>0) cout << "Silver\n";
	else cout << "Alloy\n";
	
	return 0;
}