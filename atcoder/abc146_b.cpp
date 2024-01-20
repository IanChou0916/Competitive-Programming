// Problem: B - ROT N
// Contest: AtCoder - AtCoder Beginner Contest 146
// URL: https://atcoder.jp/contests/abc146/tasks/abc146_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string s;
int n;



int main(void){
	iofast
	cin >> n >> s;
	for(int i=0;i<s.size();i++){
		s[i]+=n;
		if(s[i]>'Z') s[i]-=26;
		if(s[i]<'A') s[i]+=26;
	}	
	cout << s << "\n";
	return 0;
}