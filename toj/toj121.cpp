#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>

ll n;

int main(void){
	
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout << " ";
		}
		for(int k=(n-i)*2-1;k>0;k--){
			cout << (char) (64+n-i);
		}
		cout << "\n";
	}
	return 0;
}