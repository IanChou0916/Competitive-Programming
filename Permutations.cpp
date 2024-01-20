// Problem: Permutations
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1070
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
int main(void){
	iofast
	long long n=0,a=0;
	cin >> n;
	if(n==2 || n==3){
		cout << "NO SOLUTION\n";
	}
	else {
		if(n%2 == 0) {
			a=2;
			while(a!=n+2){
				cout << a << " ";
				a+=2;
			}
			a=1;
			while(a!=n+1){
				cout << a << " ";
				a+=2;
			}
		}
		else {
			a=1;
			while(a!=n+2){
				cout << a << " ";
				a+=2;
			}
			a=2;
			while(a!=n+1){
				cout << a << " ";
				a+=2;
			}
		}
	}
	
	
	return 0;
}