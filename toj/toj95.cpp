#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
ll n=0,s=0;
int main(void){
	iofast
	cin >> n >> s;
	if((n == 1 && s>=8)|| (n == 2 && s>=9) || n == 3 && s>=10){
		cout << "PASS!\n";
	}
	else {cout <<"FAIL! You see see you!\n";} 
	return 0;
}