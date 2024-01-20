// Problem: Climbing Worm
// Contest: Kattis
// URL: https://open.kattis.com/problems/climbingworm
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
ll a,b,h;
ll res=0;
int ans = 0;
int main(void){
	cin >> a >> b >> h;
	while(res<h){
		//cout << res << " " << ans << " " <<h<<"\n";
		ans++;
		res+=a;
		if(res>=h) {break;}
		else res-=b;
	}
	cout << ans <<"\n";
	return 0;
}