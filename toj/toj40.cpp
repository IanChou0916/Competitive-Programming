#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
ll a,b;
int main(void){
	penguin
	while(cin >> a >> b){
		ll mod = __gcd(a,b);
		cout << (a/mod)*b<<"\n";
	}
	return 0;
}