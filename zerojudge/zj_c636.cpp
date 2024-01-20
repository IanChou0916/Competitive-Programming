#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
int n;
string s[12]  = {"鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬"};
int main(void){
	penguin
	while(cin >> n){
		cout << s[(n+119+(n<0))%12] << "\n";
		
		
		
	}
	return 0;
}