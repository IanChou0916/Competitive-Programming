#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr(_) cout << fixed << setprecision(_)
//template <class T>


int main(void){
	penguin
	int n;
	string s = "*";
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			cout << " ";
		}
		cout << s << "-"<<i << "\n";
		s+="*";
	}
	return 0;
}