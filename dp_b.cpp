// Problem: B - Frog 2
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
const int maxn = 2e5+10;
const int maxk = 1e9;
vector<ll> dp(maxn,1e9),arr(maxn);

ll n,k;
int main(void){
	penguin
	cin >> n >> k;
	dp[1] = 0;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			dp[i+j] = min(abs(arr[i+j]-arr[i])+dp[i],dp[i+j]);
		}
	}
	cout << dp[n] << "\n";
	return 0;
}