// Problem: B - 180°
// Contest: AtCoder - AISing Programming Contest 2021（AtCoder Beginner Contest 202）
// URL: https://atcoder.jp/contests/abc202/tasks/abc202_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(s) s.begin(),s.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>

string s;

int main(void){
	
	getline(cin,s);
	reverse(all(s));
	for(unsigned int i=0;i<s.size();i++){
		if(s[i] == '6') cout << '9';
		else if(s[i] == '9') cout << '6';
		else cout << s[i];
	}
	cout << "\n";
	return 0;
}