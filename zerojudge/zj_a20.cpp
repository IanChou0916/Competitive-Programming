#include <bits/stdc++.h>
using namespace std;
#define iofast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
//           012345678901234567890234567890123456
string id = "__________ABCDEFGHJKLMNPQRSTUVXYWZIO";
string s;

int mod = 10;
int main(void){
	iofast
	cin >> s;
	int res=0;
	for (int i=0; i<id.size(); i++){
	if(s[0] == id[i]) {
		res = (i/10)+(i%10)*9;
		//cout << res<<" ";
		break;
		}
	}
	for(int i=1;i<s.size()-1;i++){
		res+=((s[i]-'0')*(9-i));
		//cout << res << " ";
	}
	res+=s[s.size()-1]-'0';
	if(res%mod == 0){cout <<"real\n";}
	else {cout << "fake\n";}
	
	return 0;
}
