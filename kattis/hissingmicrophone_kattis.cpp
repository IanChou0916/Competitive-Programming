// Problem: Hissing Microphone
// Contest: Kattis
// URL: https://open.kattis.com/problems/hissingmicrophone
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string s;
int a=0;

int main(void){
	iofast
	cin >> s;
	for(int i=0;i<s.size()-1;i++){
		if(s[i] == s[i+1] && s[i] == 's') {cout << "hiss\n"; a=1; break;}
	}
	if(a == 0) {cout << "no hiss\n";}
	
	return 0;
}