// Problem: Adding Trouble
// Contest: Kattis
// URL: https://open.kattis.com/problems/addingtrouble
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
unsigned ll a,b,c;
int main(void){
	penguin
	cin >> a >> b >> c;
	(a+b == c) ? cout << "correct!\n" : cout << "wrong!\n";
	return 0;
}