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

const int maxn = 1e6+10;
const int maxc = 1e9;
//template <class T>

int dp[maxn];
int main(void){
	penguin
	ll n,m;
	cin >> n >> m;
	if(m == 0 || n%m == 0) cout << "OK!\n";
	else cout << n%m << "\n";
	
	return 0;
}