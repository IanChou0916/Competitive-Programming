#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>

ll n;

int main(void){
	
	cin >> n;
	vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	reverse(all(v));
	for(int i=0;i<n;i++){
		cout << v[i] << "\n";
	}
	return 0;
}