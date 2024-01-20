
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize(2)
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define X first
#define Y second
#define pii pair<int,int>	
#define pr(_) cout << fixed << setprecision(_)
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
#define see(_) cerr << _ << "\n";
typedef long long ll;

int maxn = 2e5+10;
vector<ll> v;
ll n,k;
bool chk(ll ans) {
	ll cnt = 1;
	ll res=0;
	for(int i=0;i<n;i++){
		if(v[i] > ans)return true;
		res+=v[i];
		if(res > ans) {
			cnt++;
			res = v[i];
		}
		//cerr << res << " " << cnt << "\n";
	}
	if (cnt > k ){return true;}
	else return false;
}
int main(void){
	penguin
	cin >> n >> k;
	v.resize(n);
	for(ll &x:v) cin >> x;
	
	ll l=1, r=1e18,mid=0,ans=v[0];
	while(l<r){
		
		mid = (l+r)/2;
		
		if(chk(mid)){
			
			l = mid + 1;
		}
		else {
			ans = mid;
			r = mid;
		}
		//cerr << l << " " << mid << " " << r << "\n\n";
		
	}
	cout << ans <<'\n';
	return 0;
}