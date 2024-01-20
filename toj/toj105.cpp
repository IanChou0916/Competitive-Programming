#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
ll res=2;
int main(void){
	penguin
	for(int i=0;i<25;i++){
		res = res*2+1;
	}
	cout << res<<"\n"; //100663295
	return 0;
}