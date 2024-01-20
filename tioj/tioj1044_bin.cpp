#include<bits/stdc++.h>
#include"lib1044.h"
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main(void){
	iofast
	ll mid,l,r;
	r = Initialize();
	l = 1;
	while(l<r) {
		mid = (l+r)/2;
		int x = Guess(mid);
		if(x == 0){
			l = mid+1;
		}
		else if(x == 1) {
			r = mid;
		}
	}
	mid = (l+r)/2;
	Report(mid);
	return 0;
}