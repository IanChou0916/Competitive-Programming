// Problem: Quadrant Selection
// Contest: Kattis
// URL: https://open.kattis.com/problems/quadrant
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
ll x,y;
int main(void){
	cin >> x >> y;
	if(x>0 && y>0) cout << "1\n";
	else if(x>0 && y<0) cout << "4\n";
	else if(x<0 && y>0) cout << "2\n";
	else cout <<"3\n";
	return 0;
}