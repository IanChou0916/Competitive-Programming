#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll unsigned long long
ll n,k;
int main(void){
	iofast
	cin >> k >> n;
	cout << k*(n-1)-1+k << "\n";
	return 0;
}