#include <bits/stdc++.h>
using namespace std;
#define int  long long
const int maxn = 1e9+10;
set<int> s;
int n,k;

signed main(void){
	cin >> n;
	for(int i=0;i<n;i++){
		cin>> k;
		s.insert(k);
	}
	cout << s.size() << endl;
}