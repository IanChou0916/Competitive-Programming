// Problem: C - Buy an Integer
// Contest: AtCoder - AtCoder Beginner Contest 146
// URL: https://atcoder.jp/contests/abc146/tasks/abc146_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long
ll a,b,x;
ll res=1;
const ll maxn = 1e9;
bool cmp(ll mid){
	res =to_string(mid).length();
	if(mid*a+b*res <= x){return true;}
	else return false;
}
int main(void){
	iofast
	cin >> a >> b >> x;
	ll l=0,r = 1e9+1;
	ll mid ;
	while(r-l>1){
		mid = (l+r)/2;
		//cout << l << " "<< mid << " " << r << "\n";
		
		if(cmp(mid)){
			l = mid;
		}
		else {
			r = mid;
		}
		//cout << mid*a+b*res << " "<<res<< "\n";
	}
	cout << l <<"\n";
	return 0;
}