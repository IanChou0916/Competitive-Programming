// Problem: Autori
// Contest: Kattis
// URL: https://open.kattis.com/problems/autori
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string s;
int main(void){
	iofast
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>= 'A' && s[i]<= 'Z') cout << s[i];
	}
	cout << "\n";
	return 0;
}