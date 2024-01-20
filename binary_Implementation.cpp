#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define int long long
vector<int> v(1e5+10);
string s;

string search(int l,int r,int k){
	while(l<=r){
		int m = (l+r)/2;
		//cout << l << " " << m <<" " << r <<"\n";
		if(v[m] == k) return "YES\n";
		else if(v[m]<k) {l= m+1;}
		else { r = m-1;}
	}
	return "NO\n";
}
signed main(void){
	iofast
	int n,q;
	
	cin >> n >> q;
	for(int i=1;i<=n;i++){
		cin >> v[i];
	}
	sort(v.begin()+1,v.begin()+n+1);
	/*
	for(int i=1;i<=n;i++){
		cout << v[i]<< " ";
	}
	cout << q <<endl;
	*/
	for(int i=0;i<q;i++){
		int k;
		cin >> k;
		cout << search(1,n,k);
	}
	return 0;
}