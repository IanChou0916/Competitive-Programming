// Problem: A. Watermelon
// Contest: Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/A
// Memory Limit: 64 MB
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
	ll n;
	cin >> n;
	int cmp = 0;
	for(int i=2;i<=n;i++){
		if(i%2 == 0 && (n-i)%2 == 0 && (n-i)!=0) {cout << "YES\n";
		cmp = 1;
		}
		break;
	}
	
	if(cmp == 0) cout << "NO\n";
	return 0;
}