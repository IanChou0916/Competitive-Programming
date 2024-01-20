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
int dx[]={0,1};
int dy[]={1,0};
int main(void){
	penguin
	int n,m;
	while(cin >> n >> m){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				dp[1][1] = arr[1][1];
				cin >> arr[i][j];
				dp[1][j+1] = arr[1][j+1]+dp[1][j];
			}
		}
		
		//cerr << dp[1][1] <<" ";
		
		for(int j=1;j<m;j++){
			
			//see(dp[1][j+1]) << " ";
			 
		}
		//cerr << "\n";
		for(int i=1;i<=n;i++){
			dp[i+1][1] = arr[i+1][1]+dp[i][1];
			//see(dp[i+1][i]) << " "; 
		}
		for(int i=2;i<=n;i++){
			for(int j=2;j<=m;j++){
				dp[i][j] = arr[i][j]+max(dp[i-1][j],dp[i][j-1]);
				//see(dp[i][j]);
			}
		}
		
		cout << dp[n][m] << "\n";
	}
	
	return 0;
}