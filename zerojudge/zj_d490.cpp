#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr cout << fixed << setprecision(1);

//template <typename T>
int arr[110][110];
int main(void){
	penguin
	ll a=0,b=0;
	cin >> a >> b;
	if(a%2 == 1) a++;
	if(b%2 == 1) b--;
	if(a == b) cout << a<<"\n";
	else cout <<(a+b)/2*(b-a+2)/2 << "\n";
}