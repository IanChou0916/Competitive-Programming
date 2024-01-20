// Problem: A Different Problem
// Contest: Kattis
// URL: https://open.kattis.com/problems/different
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
unsigned ll a,b;
int main(void){
	penguin
	while(cin >> a >> b){
		(a<b) ? cout << b-a : cout << a-b;
		cout << "\n";
	}
	
	return 0;
}