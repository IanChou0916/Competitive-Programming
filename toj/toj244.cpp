#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
string s;
int main(void){
	penguin
	int n;
	cin>>n>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' && s[i]<='Z') cout << char(s[i]+32);
		else cout << char(s[i]-32);
	}
	cout <<"\n";
	
	return 0;
}