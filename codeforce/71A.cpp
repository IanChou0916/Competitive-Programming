// Problem: A. Way Too Long Words
// Contest: Codeforces - Codeforces Beta Round 65 (Div. 2)
// URL: https://codeforces.com/problemset/problem/71/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
#define see(_) cerr << _ << "\n";
typedef long long ll;

int main(void){
	penguin
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		if(n<=10) cout << s << "\n";
		else cout << s[0] << n-2 << s[n-1] << "\n";
	}
	return 0;
}