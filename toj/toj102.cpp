#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr(_) cout << fixed << setprecision(_)
//template <class T>


int main(void){
	penguin
	long double a,b;
	char c;
	cin >>a >> c >> b;
	switch(c){
		case '+':
		pr(4)<< a << " + " << b  << " = "<< a+b << "\n";
		break;
		case '-':
		pr(4)<< a << " - " << b  << " = "<< a-b << "\n";
		break;
		case '*':
		pr(4)<< a << " * " << b  << " = "<< a*b << "\n";
		break;
		case '/':
		(b==0)? cout << "ERROR\n" : pr(4)<< a << " / " << b  << " = "<< a/b << "\n";
		break;
	}
	
	return 0;
}