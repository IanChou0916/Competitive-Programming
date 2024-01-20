#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);
vector<ll> v(3);
#define vall v.begin(),v.end()

int main(void){
	penguin
	int n;
	cin >> n;
	while(n--){
		for(int i=0;i<3;i++){
		cin >> v[i];
	}
	sort(vall);
	if(v[0]+v[1]<=v[2]) {cout << "illegal triangle\n";}
	else {
		if(v[0]*v[0]+v[1]*v[1] == v[2]*v[2]) {cout << "right triangle\n";}
		else if(pow(v[0],2)+pow(v[1],2) > pow(v[2],2)) {cout << "obtuse triangle\n";}
		else {cout <<"acute triangle\n";}
		
	}
	}
	
	return 0;
}