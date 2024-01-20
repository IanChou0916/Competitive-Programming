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

ll a,b,c,s;

int main(void){
	cin >> a >> b >> c;
	s = (a+b+c)/2;
	cout << s*(s-a)*(s-b)*(s-c) << "\n";
	return 0;
}