// Problem: Apartments
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1084
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>

int n,m,k;

int main(void){
	cin >> n >> m >> k;
	vector <int> a(n);
	vector <int> b(m);
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	sort(all(a));
	sort(all(b));
	int p1=0,p2=0;
	int ans=0;
	while(p1<n && p2<m){
		if(abs(a[p1]-b[p2])<=k) {
			p1++;
			p2++;
			ans++;
		}
		else {
			if(a[p1] < b[p2]) p1++;
			else p2++;
		}
	}
	cout << ans << "\n";
	
	
	
	return 0;
}