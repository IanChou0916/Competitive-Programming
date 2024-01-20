#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
const int maxn = 1e6+10;
//template <typename T>
int arr[maxn];

int main(void){
	penguin
	ll n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(i!=0){cout << " ";}
		cout << arr[i];
	}
	cout << "\n";
	
}