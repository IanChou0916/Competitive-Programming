// Problem: B - Two Switches
// Contest: AtCoder - AtCoder Beginner Contest 070
// URL: https://atcoder.jp/contests/abc070/tasks/abc070_b
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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


int main(void){
	penguin
	int a,b,c,d;
	cin >> a >> b >> c >>d;
	int res=-1;
	for(int i=a;i<=b;i++){
		if(c<=i && i<=d) {
			res++;
			cerr << i << " " << res << "\n";
		}
		
		else if(i>=d) break;  
	}
	cout << max(res,0) << "\n";	
	return 0;
}