#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
ll n,k;
int main(void){
	penguin
	ll a,b;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	cin >> k;
	ll res=0;
	for(int i=0;i<k;i++){
		ll a,b;
		cin >> a >> b;
		if(abs(a-b)>8) {cout << "I QUIT!\n"; res=1;break;}
		else {
			swap(v[a-1],v[b-1]);
		}
	}
	if(res==0) cout << "SORTED!\n";
	for(int i=0;i<n-1;i++){
		cout << v[i]<<" ";	
	}
	cout << v[n-1]<<"\n";
	return 0;
}