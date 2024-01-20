// Problem: N-sum
// Contest: Kattis
// URL: https://open.kattis.com/problems/nsum
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
vector <ll> v(15);
ll res=0;
ll n;
int main(void){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
		res+=v[i];
	}
	cout << res << "\n";
	return 0;
}