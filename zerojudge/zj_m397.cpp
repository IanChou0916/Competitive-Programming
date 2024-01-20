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
ll v[maxn];
ll dp[maxn][30];

int main(void){
	penguin
	ll n,m,x,y;
	cin >> n >> m >> x >> y;
	for(int i=0;i<=m;i++){
		if(i*x+(m-i)*y == n) {
			cout << i << " " << m-i << "\n";
			return 0;
		}
	}
	cout << "-1 -1\n";
	
	return 0;
	
}