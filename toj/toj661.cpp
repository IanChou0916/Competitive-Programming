#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>

int res=0;
int n,t;
int main(void){
	penguin
	cin >> n;
	for(int i=0;i<n*2;i++){
		cin >> t;
		if(t%2 == 0) res+=1;
		res = res%2;
	}
	if(res == 0) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}