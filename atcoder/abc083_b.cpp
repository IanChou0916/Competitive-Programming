// Problem: B - Some Sums
// Contest: AtCoder - AtCoder Beginner Contest 083
// URL: https://atcoder.jp/contests/abc083/tasks/abc083_b
// Memory Limit: 256 MB
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
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
typedef long long ll;


int digit(int k){
	int res=0;
	while(k!=0){
		res+=(k%10);
		k=k/10;
		cerr << k << "\n";
	}
	return res;
}
int main(void){
	penguin
	ll n,a,b;
	int res=0;
	cin >> n >> a>> b;
	for(int i=a;i<=n;i++){
		if(digit(i)>=a && digit(i) <=b){
			res+=i;
		}
	}
	cout << res << "\n";
	return 0;
}