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
typedef unsigned long long ll;

ll dp[105];

int main(void){
	penguin
	ll n;
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=100;i++){
		dp[i] = dp[i-1]+dp[i-2];
		cerr << dp[i] << "\n";
	}
	while(cin >> n){
		cout << dp[n+1] << "\n";
	}
	
	
	return 0;
}