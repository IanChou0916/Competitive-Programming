#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
string s;
ll n,k;

int main(void){
	penguin
	while(cin >> n){
	getline(cin,s);
	getline(cin,s);
	for(int i=0;i<n;i++){
		for(unsigned int j=i;j<s.size();j+=n){
			cout << s[j];
			
		}
	}
	cout << "\n";
	}
	return 0;
}
/*
|   |   |   |   |
    |   |   |   | T |
    | O | B | E | O |
    | R | N | O | T |
    | T | O | B | E |
    |   |   |   |   |
*/