#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string k;
int n;
string s[11];

int main(void){
	int a;
	iofast
	cin >> n;
	for(int i=0;i<11;i++){
		s[i] = "EMPTY";
	}
	for(int i=0;i<n;i++){
		cin >> k >> a;
		s[a] = k; 
	}
	for(int i=1;i<11;i++){
		cout <<s[i] << "\n";
	}
	
	return 0;
}