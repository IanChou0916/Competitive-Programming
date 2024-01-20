#include <bits/stdc++.h>
#define penguin ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
	
typedef long long ll;
	
int main(void) {
	penguin
	int a,b;
	int c;
	bool flag = false;
	cin >>a >> b >> c;
	if((a&&b) == c) {
		cout << "AND\n";
		flag = true;
	}
	if((a||b) == c) {
		cout << "OR\n";
		flag = true;
	}
	if(((a&&!b) || (!a && b)) == c) {
		cout << "XOR\n";
		flag = true;
	}
	if(!flag){
		cout << "IMPOSSIBLE\n";
	}
	return 0;
}