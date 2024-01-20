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

vector<pii> v;
//template <class T>


int main(void){
	penguin
	int n;
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		v.eb(make_pair(a,a*b));
		cout << v[] << " "<< v.Y << "\n";
	}
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
	}
}