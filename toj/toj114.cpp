#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);
int arr[10][10];
int res=0;
int main(void){
	penguin
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(arr[i][j] == arr[i+1][j]&& arr[i][j] == arr[i+2][j]) {res = 1; break;}
			else if(arr[i][j] == arr[i][j+1]&& arr[i][j] == arr[i][j+2]){res =1; break;}
		}
	}
	if(res == 0) cout << "No\n";
	else {cout << "Yes\n";}
	return 0;
}