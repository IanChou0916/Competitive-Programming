#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>

string s;
int main(void){
	penguin
	getline(cin,s);
	for(unsigned int i=1;i<s.size();i++){
		int res = abs(s[i]-s[i-1]);
		cout <<res;
	}
	cout <<"\n";
	return 0;
}