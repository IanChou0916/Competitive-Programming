#include<bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
ll n;
int arr[1000010];
int main(void){
	iofast
	while(cin >> n){
		if(n == 0) {break;}
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n-1;i++){
			cout << arr[i] <<" ";
		}
		cout << arr[n-1] << endl;
		
	}
	return 0;
}