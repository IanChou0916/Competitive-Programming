// Problem: B - Various distances
// Contest: AtCoder - AtCoder Beginner Contest 180
// URL: https://atcoder.jp/contests/abc180/tasks/abc180_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);

long double n,k=0;
long double res=0.0;
long double maxn=1e-9;

int main(void){
	penguin
	cin >>n;
	long double x=0.0;
	for(int i=0;i<n;i++){
		cin >> x;
		x = abs(x);
		k+=x;
		res+=(x*x);
		//cout << v[i] << " ";
		maxn = max(x,maxn);
	}
	res = sqrt(res);
	cout << fixed<<setprecision(12)<<k << "\n";
	cout << res<<"\n";
	cout << maxn<<"\n";
	return 0;
}