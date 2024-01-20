#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
ll a,b;
int main(void){
	penguin
	cin >> a >> b;
	for(int i=5,j=7;(i<=a)&&(j<=b);i+=5,j+=7){
		cout << i <<" "<<j <<"\n";
	}
	return 0;
}