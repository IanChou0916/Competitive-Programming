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
	ll n,k;
	while(cin >> n>>k){
		if(n == 0) cout << "Ok!\n";
		else if(k == 0) cout << "Impossib1e!\n";
		else if((n%k == 0)) cout << "Ok!\n";	
		else cout << "Impossib1e!\n";
	}
	
	
	return 0;
}