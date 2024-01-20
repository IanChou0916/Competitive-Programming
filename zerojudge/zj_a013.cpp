#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr cout << fixed << setprecision(1);

//template <typename T>
int arr[110][110];
int main(void){
	penguin
	
	int r,c;
	while(cin >> r >> c){
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			if(j!=0) cout << " ";
			cout << arr[j][i];
		}
		cout << "\n";
	}
	}
	
	return 0;

}