#include <bits/stdc++.h>
using namespace std;

#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr(_) cout << fixed << setprecision(_)
#define eb(_) emplace_back(_)
#define pb(_) pop_back(_)
typedef long long ll;

vector<pii> v;
//template <class T>


int main(void){
	penguin
	string s1;
	string s2;
	string s3;
	while(getline(cin,s1)){
		int n = s1.length();
		s2 = "\0";
		s3 = "\0";
		for(int i=0;i<n;i++){
			if('A'<= s1[i]&& s1[i] <= 'Z') {s2 = s2+s1[i];} 
			else if('a' <= s1[i]&& s1[i] <= 'z') {s2 = s2+char(s1[i]-32);}
			cerr << s2 << "\n"; 
		}
		s3 = s2;
		reverse(all(s2));
		if(s2 == s3) cout <<"SETUP! "<<s1<<"\n";
		else cout << s1<<"\n";
	}
	return 0;
}