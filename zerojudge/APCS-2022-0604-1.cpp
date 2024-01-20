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
set<int,greater<int>> st;

int main(void){
	int a,b,c;
	cin >> a >> b >> c;
	st.insert(a);
	st.insert(b);
	st.insert(c);
	cout << 4-st.size();
	auto it = st.begin();
	while(it != st.end()){
		cout << " " << *it;
		it++;
	}
	cout << "\n";
}