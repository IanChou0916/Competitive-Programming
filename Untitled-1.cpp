#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int arr[55];
signed main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >>k;
	for(int i=1;i<=n;i++){
		for(int j=n;j<=k;j++){
		cout << "*";
		}
		cout << endl;
	}
	return 0;
}