#include <bits/stdc++.h>
using namespace std;
#define ll long long
int arr[1010];
int T;
ll n,m;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >>T;
	for(int i=1;i<=T;i++){
		cin >> n >>m;
		for(int j=0;j<n-1;j++){
		cin >> arr[j];
		}
		sort(arr,arr+n);
		int h = arr[upper_bound(arr,arr+n,m)-arr];
		int l = arr[lower_bound(arr,arr+n,m)-arr-1];
		cout << h <<" "<< l << endl;
		
	}
	return 0;
}
