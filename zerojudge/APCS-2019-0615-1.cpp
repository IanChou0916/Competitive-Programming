#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>

ll a=0,b=0,c;
ll ar=0,br=0;
int main(void){
	penguin
	for(int i=0;i<4;i++){
		cin >>c;
		a+=c;
	}
	cout << a;
	for(int i=0;i<4;i++){
		cin >> c;
		b+=c;
	}
	cout << ":" <<b << "\n";
	for(int i=0;i<4;i++){
		cin >>c;
		ar+=c;
	}
	cout << ar;
	for(int i=0;i<4;i++){
		cin >> c;
		br+=c;
	}
	cout << ":" <<br << "\n";
	if(a-b>0 && ar-br>0) cout << "Win\n";
	else if(a-b>0 && br-ar>0) cout << "Tie\n";
	else if(b-a>0 && ar-br>0) cout << "Tie\n";
	else cout << "Lose\n";
	return 0;
	
}