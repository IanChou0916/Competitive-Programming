// Problem: Basketball One-on-One
// Contest: Kattis
// URL: https://open.kattis.com/problems/basketballoneonone
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string s;
ll a=0,b=0;
int main(void){
	iofast
	getline(cin,s);
	for(unsigned int i=0;i<s.size();i++){
		if(s[i] == 'A') a+= s[i+1]-'0';
		if(s[i] == 'B') b+= s[i+1]-'0';
		//cout << b << " " << a << "\n";
		if(a>10 && b!=10) {cout << "A\n"; break;}
		else if(a!=10 && b>10) {cout << "B\n"; break;}
		else if(a>10 && a-b>=2) {cout << "A\n"; break;}
		else if(b>10 && b-a>=2) {cout << "B\n"; break;}
		 
	}
	
	return 0;
}