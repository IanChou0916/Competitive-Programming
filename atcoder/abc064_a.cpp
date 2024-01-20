// Problem: A - RGB Cards
// Contest: AtCoder - AtCoder Beginner Contest 064
// URL: https://atcoder.jp/contests/abc064/tasks/abc064_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll unsigned long long

int main(void){
	ll a=0,b=0,c=0;
	cin >> a >> b>>c;
	if((b*10+c)%4 == 0) {cout <<"YES\n";}
	else {cout << "NO\n";}
	
	
	return 0;
}