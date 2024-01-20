#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>


int main(void){
	penguin
	ll a,b;
	cin >>a >>b;
	if(max(a,b)%min(a,b) == 0) cout << "Y\n";
	else cout << "N\n";
	return 0;
}