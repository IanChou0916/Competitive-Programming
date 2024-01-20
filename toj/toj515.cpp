#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
int n;
int main(void){
	penguin
	cin >>n;
	if(n%1111 == 0 && n/10000 == 0) cout << "GREAT!!\n";
	else cout << "OAQ\n";
	return 0;
}