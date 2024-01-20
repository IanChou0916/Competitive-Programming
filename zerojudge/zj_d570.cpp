#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>

int main(void){
	penguin
	ll n;
	cin>> n;
	while(n/10 >0){
		cout << n << "\n";
		n/=10;
	}
	cout << n<<"\n";
	return 0;
}