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
	int n,m;
	cin >> n>>m;
	vector<int> v(n);
	for(int &x:v)cin >> x;
	sort(all(v));
	int p1=0,p2=n-1;
	int res=0;
	while(p1<=p2){
		if(v[p1]+v[p2]>m){
			res++;
			p2--;
		}
		else {
			res++;
			p1++;
			p2--;
		}
	}
	cout << res << "\n";
	return 0;
}