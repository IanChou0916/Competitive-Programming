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
string num[] = {"0","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};

string s;
int t;

int main(void){
	penguin
	int n;
	
	while(cin >> n){
		vector<pii> key(n);
		for(int i=0;i<n;i++){
			cin >> s >> key[i].X;
			for(int j=0;j<10;j++){
			if(num[j] == s) key[i].Y = j; 
			}
			see(key[i].X) << key[i].Y <<" " ;
		}
		sort(all(key));
		 for (const pii &p: key) {
		cout << p.Y ;
		}
		cout << "\n";
	
	}
	return 0;
}