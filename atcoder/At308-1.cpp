#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define const int maxn = 1e6+10;
int arr[12];

signed main(void){
	iofast
	string s = "Yes";
	arr[0] = 0;
	for(int i=1;i<=8;i++){
		cin >> arr[i];
		if(arr[i]<100 || arr[i]>675 || arr[i]%25 != 0 || arr[i]-arr[i-1]<0) {
			s = "No";
		}
	}
	cout << s << endl;
	return 0;
}