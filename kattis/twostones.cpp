// Problem: Take Two Stones
// Contest: Kattis
// URL: https://open.kattis.com/problems/twostones
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
int main(void){
	ll n;
	cin >> n;
	(n%2 == 0) ? cout << "Bob\n" : cout << "Alice\n";
	return 0;
}