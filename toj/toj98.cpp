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
	ll n = 299792458;
	cout << "1 Light-second(LS) is " << n << " metres.\n";
	cout << "1 Light-minute(LM) is " << n*60 << " metres.\n";
	cout << "1 Light-hour(LH) is " << n*60*60 << " metres.\n";
	cout << "1 Light-day(LD) is " << n*3600*24 << " metres.\n";
	cout << "1 Light-week(LW) is " << n*3600*24*7 << " metres.\n";
	cout << "1 Light-year(LY) is " << n*3600*24*365 << " metres.\n";
	
	
	return 0;
}