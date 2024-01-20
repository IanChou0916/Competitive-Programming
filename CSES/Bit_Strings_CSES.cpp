#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
const ll mod = 1e9+7;
int fastpow(int a,ll b){
	if(b == 0) {return 1;}
	ll res = fastpow(a,b/2)%mod;
	if(b%2 == 0) return res%mod*res%mod;
	else return res%mod*res%mod*a%mod;
}
int main(void){
	iofast
	ll n=0;
	cin >> n;
	cout << fastpow(2,n)%mod << "\n";
	
	
	return 0;
}