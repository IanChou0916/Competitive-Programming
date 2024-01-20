#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>

pii p[1005];
ll n;
int main(void){
	penguin
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> p[i].x >> p[i].y;
	}
	sort(p,p+n);
	for(int i=0;i<n;++i){
		cout << p[i].x <<" " <<p[i].y <<"\n";
	}
	return 0;
}