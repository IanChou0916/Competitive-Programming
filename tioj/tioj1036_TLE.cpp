#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long
int n;

void sol(int n){
	int res = 0;
	vector<bool> prime(n+1,true);
	prime[0] = prime[1] = false;
	for(int i=2;i<=n;i++){
		res+=prime[i];
		for(int j=i*2;j<=n;j+=i){
			prime[j] = false;
		}
	}
	cout << res << "\n";
}
int main(void){
	iofast
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		sol(n);
	}
}