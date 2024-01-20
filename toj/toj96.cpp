#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0);cin.tie(0);

int main(void){
	ll a,b;
	char c;
	cin >> a >> c>> b;
	switch(c){
		case '+':
			cout << a <<" + "<<b<<" = "<<a+b<<"\n"; break;
		case '-':
			cout << a <<" - "<<b <<" = "<<a-b <<"\n"; break;
		case '*':
			cout << a <<" * "<<b <<" = "<<a*b <<"\n"; break;
		case '/':
		if(b == 0) {cout << "ERROR\n";break;}
		else {
			cout << a <<" / "<<b <<" = "<<a/b<<" ... "<<a%b<< "\n"; break;
		}
			
	}
	return 0;
}