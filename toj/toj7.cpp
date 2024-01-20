#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <class T>


int main(void){
	penguin
	int n,t;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> v(n+1);
		for(int i=0;i<=n;i++){
			cin >> v[i];
		}
		int k=n;
		while(k--){
			for(int i=0;i<n;i++){
				v[i] = v[i+1]-v[i];
			}
			
		}
		cout << v[0] << "\n";
		
		
	}
	return 0;
}