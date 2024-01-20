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
const ll maxn = 2e5+10;


int main(void){
	int n;
	while(cin >> n){
		if(n == 0) return 0;	
		else if(n>=101) printf("f91(%d) = %d\n",n,n-10);
		else printf("f91(%d) = %d\n",n,91);
	}
	
	
	return 0;
}