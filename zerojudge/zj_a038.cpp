#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()

#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr cout << fixed << setprecision(1);

//template <typename T>
string s;
int main(void){
	penguin
	int res=0;
	cin >> s;
	reverse(all(s));
	string ans;
	int n = s.size();
	for(int i=0;i<n;i++){
		if(s[i]!='0'){
			ans = s.substr(i);
			break;
		}
	}
	if(ans.empty()) ans = "0";
	
	cout << ans <<"\n";
	
	
	return 0;

}