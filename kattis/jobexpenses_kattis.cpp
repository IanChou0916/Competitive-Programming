// Problem: Job Expenses
// Contest: Kattis
// URL: https://open.kattis.com/problems/jobexpenses
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define iofast ios::sync_with_stdio(0); cin.tie(0);
const int maxn = 2e4+20;
vector<long long> v(maxn);
int main(void){
	iofast
	ll n;
	ll res=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
		if(v[i]<0){res-=v[i];}
	}
	cout << res <<"\n";
	return 0;
}