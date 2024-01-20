#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll unsigned long long

ll fastpow(ll a,ll b){
	if(b == 0){return 1;}
	ll res = fastpow(a,b/2);
	if(b%2 == 0) return res*res;
	else return res*res*a;
}
int main(void){
	iofast
	int n=0;
	ll a=0,b=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >>b;
		cout << fastpow(a,b) << "\n";
	} 
	
	
	return 0;
}