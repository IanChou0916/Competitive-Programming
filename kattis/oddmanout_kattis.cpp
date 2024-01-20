// Problem: Odd Man Out
// Contest: Kattis
// URL: https://open.kattis.com/problems/oddmanout
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll  long long


#define vall v.begin(),v.end()


ll n=0,k=0;
int main(void){
	iofast
	cin >> n ;
	for(int i=0;i<n;i++){
		cin >> k;
		vector<ll> v(k+1);
		for(int j=1;j<=k;j++){
			cin >> v[j];
		}
		sort(vall);
		for(ll l=1;l<=k;l++){
			 if(v[l] != v[l+1] && v[l] != v[l-1]){
			 	cout << "Case #" << i+1 << ": " << v[l]<<"\n";
			 }
				
		}
		
	}
	return 0;
}