#include<bits/stdc++.h>
using namespace std;
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define all(_) _.begin(),_.end();
#define pr(_) cout << fixed << setprecision(_)
typedef long long ll;
typedef long double ld;
int main(void) {
	penguin
	ll a,b,c;
	cin >> a >> b >> c;
	ll sum=a-c;
	while(b--){
		ll n,m;
		cin >> n >> m;
		sum+=(n*m);
	}
	cout << sum/4 << "\n";
}