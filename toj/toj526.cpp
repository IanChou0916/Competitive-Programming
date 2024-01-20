#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);
string s;
int res=0;
int main(void){
	penguin
	cin >>s;
	for(int i=s.size()-1;i>=0;i--){
		//cout << res << " ";
		if(s[i]!='0') {cout<<s[i]; res+=(s[i]-'0');}
		else {
			if(res!=0){cout<<s[i];}
		}
	}
	cout << "\n";
	return 0;
}