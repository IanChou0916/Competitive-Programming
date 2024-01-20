#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);
string s;
int n,k;

int main(void){
	penguin
	cin >> n;
	getline(cin,s);
	getline(cin,s);
	for(int i=0;i<4;i++){
		for(unsigned int j=i;j<s.size();j+=4){
			cout << s[j];
		}
	}
	cout << "\n";
	return 0;
}