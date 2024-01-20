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

ll t;
string s;

int main(void){
	penguin
	cin >> t >> s;
	for(unsigned int i=0;i<s.size();i++){
		if(s[i]-t<'A') cout << char(s[i]-t+26);
		else cout << char(s[i]-t);
	}
	cout <<"\n";
	return 0;
}