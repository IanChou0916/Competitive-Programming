#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0);cin.tie(0);
int n;

void hanoi(int n,char from,char to,char mid){
	if(n == 1) {
		cout << "Move ring "<<n<<" from "<<from<<" to "<<to<<"\n";
		return;
	}
	else {
		hanoi(n-1,from,mid,to);
		cout << "Move ring "<<n<<" from "<<from<<" to "<<to<<"\n";
		hanoi(n-1,mid,to,from);
	}
}
int main(void){
	penguin
	while(cin >>n){
		hanoi(n,'A','C','B');
		cout <<"\n";
	}
	
	return 0;
}