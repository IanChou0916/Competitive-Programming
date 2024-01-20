#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <class T>

int dp[10010];
const int mod = 1e9+7;
int main(void){
	penguin
	int stairs;
	dp[0] = dp[1] = 1;
	while(cin >> stairs){
		for(int i=2;i<=stairs;i++){
			dp[i] = (dp[i-1]+dp[i-2])%mod;
		}
		cout << dp[stairs] << "\n";
	}
	return 0;
}