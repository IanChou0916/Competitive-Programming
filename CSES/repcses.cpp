#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
string s;
ll t=0;
int main(void){
	iofast
	int ne=1;
	int m=1;
	getline(cin,s);
	for(unsigned int i=0;i<s.size();i++){
		if(s[i]==s[i+1]){
			ne++;
			
		}
		else {
		m=max(ne,m);
		ne=1;}
	}
	m=max(ne,m);
	cout << m << endl;
	
	
	
	return 0;
}