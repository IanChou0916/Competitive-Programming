#include<bits/stdc++.h>
using namespace std;
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define all(_) _.begin(),_.end();
#define pr(_) cout << fixed << setprecision(_)
typedef long long ll;
typedef long double ld;
int main(void) {
	penguin
	ld a,b,c,d;
	cin >> a >> b >> c >> d;
	ld sum = a*d-b*c;
	if(-1e-7 < sum && sum < 1e-7) cout << 0 <<"\n";
	else cout << 1 << "\n";
}