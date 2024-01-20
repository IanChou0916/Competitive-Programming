#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
#define pb push_back
#define B begin()
#define E end()
vector <int> v[1000005];
ll n,k;

int main(void){
	penguin
	cin >> n >> k;
	for(int i=0;i<k;i++){
		int a,b;
		cin >> a >>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	for(int i=1;i<=n;i++) sort(v[i].B,v[i].E);
	for(int i=1;i<=n;i++){
		for(int j=0;j<(int)v[i].size();j++){
			if(j!=0) cout <<" ";
			cout << v[i][j];
		}
		cout <<"\n";	
	}
	return 0;
}