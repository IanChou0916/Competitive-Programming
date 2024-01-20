#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
ll n;
int main(void){
	penguin
	cin >> n;
	n = (n%9 != 0)? ((n/9)+1)*9 : (n+9);
	cout << n <<"\n"; 
	return 0;
}