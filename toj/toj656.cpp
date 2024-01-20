#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);
#define vall v.begin(),v.end()
ll n,k=0;
ll res=0;
ll f=0;

int main(void){
	penguin
	cin >> n >> k;
	vector<ll> v(n); 
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	sort(vall);
	for(int i=0;i<n;i++){
		f = k-v[i];
		res+= upper_bound(vall,f)-lower_bound(vall,f);
	}
	cout << res/2 << "\n";
	return 0;
}