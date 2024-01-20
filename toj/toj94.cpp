#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(_) _.begin(),_.end()
#define penguin ios::sync_with_stdio(0);cin.tie(0);
#define X first
#define Y second
#define pii pair<int,int>
#define pr(_) cout << fixed << setprecision(_)
//template <class T>

int season[] = {12,1,2,3,4,5,6,7,8,9,10,11};
int main(void){
	penguin
	int n;
	cin >> n;
	
	for(int i=0;i<12;i++){
		if(season[i] == n){
			if(i<3)cout << "Winter!\n";
			else if(i<6) cout << "Spring!\n";
			else if(i<9) cout << "Summer!\n";
			else cout << "Autumn!\n";
			break;
		}
	}
	
	return 0;
}