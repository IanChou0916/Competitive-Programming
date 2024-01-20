// Problem: ABC
// Contest: Kattis
// URL: https://open.kattis.com/problems/abc
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
vector<ll> v(3);
string s;
int main(void){
	for(int i=0;i<3;i++){
		cin >> v[i];
	}
	sort(all(v));
	cin >> s;
	for(int i=0;i<3;i++){
		if(i !=0) cout << " ";
		switch(s[i]){
			case 'A' :
			cout << v[0];
			break;
			case 'B' :
			cout << v[1];
			break;
			case 'C' : 
			cout << v[2];
			break;
		}	
	}
	cout << "\n";
	return 0;
}