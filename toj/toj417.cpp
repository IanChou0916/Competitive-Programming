#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>

string s;
int a=0;
int main(void){
	penguin
	cin >> s;
	for(unsigned int i=0;i<s.size();i++){
		if(s[i]!='2' &&s[i]!='3'&&s[i]!='5' &&s[i]!='7' ){
			a=1;
			break;
		}
	}
	if(a == 1){cout << "No\n";}
	else {cout << "Yes\n";}
	return 0;
}