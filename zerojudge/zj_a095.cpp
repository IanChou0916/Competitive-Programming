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
int n,m;

int main(void){
	penguin
	while(cin >> n >> m){
		if(m == n) cout << m <<"\n";
		else cout << m+1 << "\n";
	}
	return 0;
	
}