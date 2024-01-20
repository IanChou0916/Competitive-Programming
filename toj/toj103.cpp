#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
struct drink{
	string s;
	string n;
};
int main(void){
	penguin
	drink a;
	drink b;
	cin >> a.s >> a.n;
	cin >> b.s >> b.n;
	if(a.s == b.s && a.n == b.n) {cout <<"GOOD\n";}
	else if(a.s == b.s || a.n == b.n) {cout <<"=~=\n";}
	else {cout <<"OTZ\n";}
	return 0;
}