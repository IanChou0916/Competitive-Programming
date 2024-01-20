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

int main(void){
	penguin
	ll n;
	cin >> n;
	for(int i=1;i<=n;i++){
		ll y;
		cin >> y;
		cout << "Case " << i << ": ";	
		if(y%4 == 0 && y%100!=0 || y%400 == 0){
			cout << "a leap year\n";
		}
		else cout << "a normal year\n";
	}
	return 0;
}