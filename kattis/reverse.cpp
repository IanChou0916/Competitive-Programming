// Problem: Reverse
// Contest: Kattis
// URL: https://open.kattis.com/problems/ofugsnuid
// Memory Limit: 1024 MB
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
typedef long long ll;
//template <class T>


int main(void){
	penguin
	ll n;
	cin >> n;
	vector<int> v(n);
	for(int &x:v) cin >> x;
	reverse(all(v));
	for(int &x:v) cout << x << "\n";
	return 0;
}	