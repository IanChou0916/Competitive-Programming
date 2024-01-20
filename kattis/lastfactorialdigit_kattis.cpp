// Problem: Last Factorial Digit
// Contest: Kattis
// URL: https://open.kattis.com/problems/lastfactorialdigit
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(s) s.begin(),s.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
ll n;
ll res=0;
int main(void){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		res = 1;
		while(n!=0){
			res*=n;
			res=res%10;
			n--;
		}
		cout << res << "\n";
	}
	return 0;
}