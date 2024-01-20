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
#define see(_) cerr << _
typedef long long ll;

const int maxn = 2e3+10;
const int maxc = 1e9;
//template <class T>

int dp[maxn][maxn];
int arr[maxn][maxn];


string s;
int t;

int main(void){
	ll a,b;
	cin >> a >> b;
	if(a>b) swap(a,b);
	int res=0;
	int res_2=0;
	if(a%2 == 1) a+=1;
	for(int i=a;i<=b;i+=2){
		res+=i;
	}
	cout<< res << "\n";
	
	return 0;
}