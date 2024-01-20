#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
ll n;
ll res=0;

int main(void){
	penguin
	cin >> n;
	res = 0;
	res = res+(n/12)*50;
	res+=((n%12)*5);
	cout << res<<"\n";
	
	return 0;
}