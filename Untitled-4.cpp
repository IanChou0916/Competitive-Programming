#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string s;

int main(void){
	iofast
	int n;
	ll a=0,b=0,c=0;
	ll ans=0;
	ll i=0;
	cin >> n >> s;
	while(!(a>0 && b>0 && c>0)) {
		if(s[i] == 'A') {a++;}
		else if(s[i] == 'B') {b++;}
		else if(s[i] == 'C'){c++;}
		i++;
	}
	cout << a+b+c << endl;
	
	
	return 0;
}