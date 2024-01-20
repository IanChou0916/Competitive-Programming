#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
int arr[1000010];
ll t=0;
int main(void){
	iofast
	int n;
	cin >> n;
	for(int i=1;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);

	for(int i=0;i<=n;i++){
		if(arr[i]!=i) {cout << i << endl; break;}
	}
	
	
	return 0;
}
