// Problem: A - Counting
// Contest: AtCoder - AtCoder Beginner Contest 209
// URL: https://atcoder.jp/contests/abc209/tasks/abc209_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll unsigned long long

int main(void){
	ll a=0,b=0;
	cin >> a >> b;
	if(a<=b){cout << b-a+1<<"\n";}
	else {cout << "0\n";}
	
	
	return 0;
}