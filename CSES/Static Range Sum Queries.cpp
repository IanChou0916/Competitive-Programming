// Problem: Static Range Sum Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1646
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
typedef long long ll;
//template <class T>


int main(void){
	penguin
	ll n,t;
	cin >> n >>t;
	vector<ll> query(n);
	ll arr[n+1];
	arr[0]=0;
	for(ll i=0;i<n;i++){
		cin >>query[i];
		arr[i+1]=arr[i]+query[i];
		cerr << arr[i] <<"\n";
		
	}
	while(t--){
		ll a,b;
		cin >> a >> b;
		cout << arr[b]-arr[a-1] << "\n";		
		
	}
	return 0;
}