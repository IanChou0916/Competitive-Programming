#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
string s;
ll n,k;
int res=0;
int c=1;

int main(void){
	penguin
	while(cin >> n){
	if(n == 0){break;}
	else {
		res=0;
		vector<int> v(n+1);
		vector<int>
		v[0] = -1;
		for(int i=1;i<=n;i++){
			cin >> v[i];
			if(v[i]-v[i-1]<0){
				res+=1;
			}
		}
		cout << "Case #"<<c<<": "<<res<<"\n";
		c++;
	}
	}
	return 0;
}