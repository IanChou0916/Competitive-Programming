#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(s) s.begin(),s.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>

int main(void){
	string s,t;
	cin >> s;
	t= s;
	reverse(all(s));
	(s == t) ? cout <<"yes\n" : cout <<"no\n";
	return 0;	
}