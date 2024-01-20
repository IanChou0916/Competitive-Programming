#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>

int f(int n){
	if(n == 1) return 1;
	else if(n%2 == 0) return f(n/2);
	else return (f(n-1)+f(n+1));
}

int main(void){
	penguin
	int n;
	cin >> n;
	cout << f(n) << "\n";
}