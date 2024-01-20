#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
int n;
const ll maxn =1e9+10;
int res=0;

int main(void){
	penguin
	ll a,b;
	while(cin >>a >>b){
		res=0;
		for(int i=a;i<=b;i++){
			if(i == 1) continue;
			int ok=1;
			for(int j=2;j*j<=i;j++){
				if(i%j == 0){
					ok=0;
					break;
				}
			}
			res+=ok;
		}
		cout << res << "\n";
	}
	return 0;
}