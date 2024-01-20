// Problem: A - Three Dice
// Contest: AtCoder - AISing Programming Contest 2021（AtCoder Beginner Contest 202）
// URL: https://atcoder.jp/contests/abc202/tasks/abc202_a
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
	vector<int> v(3);
	int res=0;
	for(int &x:v) {cin >> x; res += x; }
	cout << 21-res << "\n";
}