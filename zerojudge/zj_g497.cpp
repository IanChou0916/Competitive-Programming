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
int mod = 11;
vector<int> v(5010);

int main(void){
	penguin
	int n;
	cin >> n;
	for(int &x: v) cin >> x;
	int res=v[0]*3-3;
	for(int i=0;i<n-1;i++){
		if(v[i]<v[i+1]) res+=(3*(v[i+1]-v[i]));
		else res-=2*(v[i+1]-v[i]);
	}
	cout << res << "\n";
	return 0;
}