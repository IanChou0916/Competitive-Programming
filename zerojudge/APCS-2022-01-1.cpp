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
vector<int> v(110);
int main(void){
	penguin
	int n,d;
	ll res=0;
	int stock=0;
	bool sell = false;
	cin >> n >> d;
	cin >> v[0];
	stock = v[0];
	for(int i=1;i<n;i++){
		cin >> v[i];
		if(sell) {
			if(v[i]<=stock-d){
				stock = v[i];
				sell = false;
			}
		}
		else {
			if(stock+d<=v[i]){
				res+=(v[i]-stock);
				stock = v[i];
				sell = true;
				
			}
		}
		
	}
	cout << res << "\n";
	return 0;
	
}