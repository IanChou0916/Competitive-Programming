#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main(void){
	iofast
	ll a=0,b=0,c=0;
	cin >> a >> b >> c;
	if(a<=c && b>=c) cout << "yes\n";
	else cout << "no\n";
	
	return 0;
}