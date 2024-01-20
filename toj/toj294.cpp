#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr fixed << setprecision(2)  
//template <typename T>

string s,t;
string a,b;


int main(void){
	penguin
	getline(cin,s);
	getline(cin,t);
	for(unsigned int i=0;i<s.size();i++){
		if(s[i]>='a') a+=char(s[i]-32);
		else a+=char(s[i]);
	}
	for(unsigned int i=0;i<t.size();i++){
		if(t[i]>='a') b+=char(t[i]-32);
		else b+=char(t[i]);
	}
	//cout << a << "\n" << b << "\n";
	if((a == "XIPLUS" && b == "JILL") || (b == "XIPLUS" && a == "JILL") ){
		cout << "Hello, Sister!\n"<<"Hi, Sister!\n";
	}
	else {
		cout << "Hello, "<<t << "!\n";
		cout << "Hi, " << s << "!\n";
	}
	
	return 0;
}