#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>
ll n;

int main(void){
	ll a;
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin >>a;
		v[i] = a;
	}
	reverse(all(v));
	
	for(int i=0;i<n;i++){
		if(i!=0) cout << " ";
		cout << v[i];
	}
	cout << "\n";
}