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
	switch((n-1)/2500){
		case 0 : 
			cout << 1 << " ";
			if(n%25 == 0) cout << n/25 <<" " << 25;
			else cout << n/25+1 <<" " << n%25;
			break;
		case 1: case 2:
			n-=2500;
			cout << 2 << " ";
			if(n%25 == 0) cout << n/50 <<" " << 50;
			else cout << n/50+1 <<" " << n%50;
			break;
		case 3 :
			n-=7500;
			cout << 3 << " ";
			if(n%25 == 0) cout << n/25 <<" " << 25;
			else cout << n/25+1 <<" " << n%25;
			break;
	}
	return 0;
}