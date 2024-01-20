// Problem: Riječi
// Contest: Kattis
// URL: https://open.kattis.com/problems/rijeci
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int B[50];

int main(void){
	B[0]=0;B[1]=1;
	int n;
	cin >> n;
	for(int i=2;i<=n;i++){
		B[i] = B[i-1]+B[i-2];
	}
	cout << B[n-1]<<" "<<B[n] <<"\n";
	return 0;
}