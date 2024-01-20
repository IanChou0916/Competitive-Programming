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
	ll n,m;
	cin >> n >> m;
	string s;
	vector<string> v(1000);
	getline(cin,s);
	
	for(int i=1;i<=n;i++){
		getline(cin,s);
		v[i] = s;
		cerr << s<<" "<<i  << "\n";
	}
	for(int i=0;i<m;i++){
		int k;
		cin >> k;
		cout << v[k];
	}
	cout << "\n";
	return 0;
}	