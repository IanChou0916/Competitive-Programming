#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
vector<char> v(10);
int n;
int main(void){
	iofast
	char c;
	int p;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
		if(v[i] == 'P') p=i; 
	}
	cin >> c;
	if(c == 'L') swap(v[p],v[p-1]);
	else swap(v[p],v[p+1]);
	for(int i=0;i<n;i++){
		cout << v[i];
	}
	cout << "\n";
	return 0;
}