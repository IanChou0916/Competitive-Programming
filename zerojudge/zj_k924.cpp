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
int mod = 11;

int main(void){
	penguin
	string s1;
	string s2;
	string s3;
	cin >>s1 >> s2;
	s3 = s1+s2;
	int n=s3.length();
	int l=0,r=0;
	for(int i=0;i<n;i++){
		if(i%2 == 0) l+=(s3[i]-'0')%11;
		else r+=(s3[i]-'0')%11;
	}
	if(abs(l-r)%11  == 0) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}