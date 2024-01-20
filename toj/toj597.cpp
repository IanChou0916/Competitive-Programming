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
	int a;
	cin >>a;
	for(int i=3,j=5,k=7;(i+j+k)<=a;i+=3,j+=5,k+=7){
		cout << i << " " << j  <<" "<<k << "\n";
	}
	return 0;
}