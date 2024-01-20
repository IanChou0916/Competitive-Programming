#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);

int main(void){
	penguin
	ll a,b;
	cin >> a >> b;
	ll res = (a%2 == 0 && b%2 == 0)?(b-a)/2+1: (b-a+1)/2;
	cout << res << "\n";
	
	return 0;
}