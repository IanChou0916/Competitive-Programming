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


string toBinary(int n){
	string r;
	while(n!=0){
		r+=(n%2 == 0 ? "0" : "1");
		n/=2;
	}
	return r;
}

signed main(void){
	penguin
	unsigned long long x=2;
	while(cin >> x){
		string s = toBinary(x);
		reverse(all(s));
		cout << s << "\n";
	}
	
	return 0;
}