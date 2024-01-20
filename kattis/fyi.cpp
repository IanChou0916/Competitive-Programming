// Problem: FYI
// Contest: Kattis
// URL: https://open.kattis.com/problems/fyi
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
	string s;
	cin >> s;
	bool n = true;
	for(int i=0;i<3;i++){
		if(s[i] != '5') {n =false; break;}
	}
	cout << n << "\n";
	return 0;
}