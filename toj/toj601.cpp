#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr(_) cout << fixed << setprecision(_)
//template <class T>


int main(void){
	penguin
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			cout << "*";
		}
		cout <<"-" << i+1 << "\n";
	}
	return 0;
}