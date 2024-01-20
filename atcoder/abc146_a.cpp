// Problem: A - Can't Wait for Holiday
// Contest: AtCoder - AtCoder Beginner Contest 146
// URL: https://atcoder.jp/contests/abc146/tasks/abc146_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string s[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
string t;


int main(void){
	iofast
		cin >> t;
		for(int i=0;i<7;i++){
			if(s[i] == t) {cout << 7-i << "\n"; break;}
		}
	return 0;
}