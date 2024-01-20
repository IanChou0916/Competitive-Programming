// Problem: Reverse
// Contest: Kattis
// URL: https://open.kattis.com/problems/ofugsnuid
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
int arr[100010];
int main(void){
	iofast
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	for(int i=n;i>0;i--){
		cout << arr[i] << endl;
	}
	return 0;
}