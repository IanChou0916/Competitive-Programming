#include<bits/stdc++.h>
using namespace std;
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define all(_) _.begin(),_.end()
#define pii pair<int><int>
typedef long long ll;

int main(void){	
	ll x,n;
	cin >> x >> n;
	vector<int> v(n);
	for(int &x:v) cin >> x;
	sort(all(v));
	
	int l=0,r=0;
	for(int i=0;i<n;i++){
		if(v[i]<x) l++;
		else r++;
	}
	if(l>r) cout << l << " " <<v[0] << "\n";
	else cout << r << " " <<v[n-1] << "\n";
	return 0;
}