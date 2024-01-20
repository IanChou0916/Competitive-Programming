#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <class T>


int main(void){
	penguin
	string name;
	getline(cin,name);
	bool title = true;
	for(unsigned int i=0;i<name.size();i++){
		if(title) {cout << char(name[i]-32); title = false;}
		else if(name[i] == ' ') {title = true; cout << "\n";}
		else {cout << name[i];}
	}
	return 0;
}