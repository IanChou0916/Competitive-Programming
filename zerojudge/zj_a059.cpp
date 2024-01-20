#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
int n,t;
int a,b;
ll res;

int main(void){
	penguin
	cin >> t;
	for(int n=1;n<=t;n++){
		res=0;
		cin >> a >> b;
		for(int i=ceil(sqrt(a));(i*i)<=b;i++){
			res+=i*i;
		}
		cout << "Case " << n <<": " << res << "\n";
	}
	return 0;
}

// ceil() 無條件進位