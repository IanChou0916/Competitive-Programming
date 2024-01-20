#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
int arr[25];
int n;
int main(void){
	iofast
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++){
		cout << arr[i] << " ";
	}
	cout << arr[n-1] << endl;
	if(arr[0] >= 60) {cout << "best case" << endl;}
	else {cout << arr[lower_bound(arr,arr+n,60)-arr-1] << endl;}
	if(arr[n-1]<60) {cout << "worst case" << endl;}
	else {cout << arr[upper_bound(arr,arr+n,59)-arr] << endl;}
	return 0;
}