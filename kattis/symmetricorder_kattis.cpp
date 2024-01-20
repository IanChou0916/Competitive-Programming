// Problem: Symmetric Order
// Contest: Kattis
// URL: https://open.kattis.com/problems/symmetricorder
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
vector<string> s(20);

int main(void){
	iofast
	ll n;
	ll j=0;
	while(cin >> n){
		if(n == 0){break;}
		j++;
		cout << "SET "<<j<<"\n";
		for(int i=1;i<=n;i++){
			cin >> s[i];
		}
		for(int i=1;i<=n;i+=2){
			cout << s[i]<<"\n";
		}
		for(int i=(n%2 == 0 ? n:n-1);i>0;i-=2){
			cout << s[i]<<"\n";
		}
	}
	return 0;
}