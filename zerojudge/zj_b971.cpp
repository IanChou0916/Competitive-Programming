#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vall v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define x first
#define y second
#define pii pair<int,int>
int a,b,d;
int main(void){
	penguin
	cin >> a >>b>>d;
	for(int i=a;i!=b;i+=d){
		cout << i <<" ";
	}
	
	cout << b << "\n";
	return 0;
}