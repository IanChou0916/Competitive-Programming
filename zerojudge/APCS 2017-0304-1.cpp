#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);
string s;

int main(void){
	penguin
	cin >>s;
	ll o=0,e=0;
	for(unsigned int i=0;i<s.size();i++){
		if(i%2 == 0){o+=s[i]-'0';}
		else e+=s[i]-'0';
		
	}
	cout << abs(o-e) << "\n";
	return 0;
}