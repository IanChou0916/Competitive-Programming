// Problem: Watch Out For Those Hailstones!
// Contest: Kattis
// URL: https://open.kattis.com/problems/hailstone
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
ll res=1;
int main(void){
	cin >> n;
	
	while(n!=1){
		res+=n;
		n = (n%2 != 0) ? (n*3)+1 : n/2;
		//cout << n << " ";
	}
	cout << res << "\n";
	return 0;
}