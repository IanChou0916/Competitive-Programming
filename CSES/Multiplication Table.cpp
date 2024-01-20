// Problem: Multiplication Table
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2422
// Memory Limit: 512 MB
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

ll n;
bool cmp(ll k){
	ll res=0;
	for(int i=1;i<=n;i++){
		res += min(n,k/i);
		// 取最小值 k/i的值代表有少個數為其因數
	}
	//cerr << bool(res>n*(n-1)/2) << "\n";
	return (res > (n*n/2));
}
int main(void){
	penguin
	cin >> n;
	ll l = 1, r = n*n;
	ll mid = 1;
	
	while(l<=r){
		
		mid = (l+r)/2;
		//cerr << l << " "<< mid <<" " r << "\n";
		
		if(cmp(mid)) {
			r = mid-1;	
		}
		else {
			l = mid+1;
		}
	}
	cout << r+1 << "\n";
	return 0;
}