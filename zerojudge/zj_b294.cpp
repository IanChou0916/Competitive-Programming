#include <bits/stdc++.h>
using namespace std;

#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr(_) cout << fixed << setprecision(_)
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
typedef long long ll;
//template <class T>


int main(void){
	penguin
	ll n;
	cin >> n;
	ll res=0;
	vector<int> v(n);
	for(int &x:v) cin >> x;
	for(int i=1;i<=n;i++){
		res = res+v[i-1]*i;
	}
	cout << res << "\n";
	return 0;
}	