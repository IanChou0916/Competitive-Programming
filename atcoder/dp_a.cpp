// Problem: A - Frog 1
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_a
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
vector<ll> dp(maxn),arr(maxn);

ll n;
int main(void){
	penguin
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	dp[0] = 0;
	dp[1] = abs(arr[1]-arr[0]);
	for(int i=2;i<n;i++){
		dp[i] = min(dp[i-1]+abs(arr[i]-arr[i-1]),	dp[i-2]+abs(arr[i]-arr[i-2]));
	}
	cout << dp[n-1]<<"\n";
	return 0;
}
// dp[0] 第一階