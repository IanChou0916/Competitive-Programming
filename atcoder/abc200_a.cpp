// Problem: A - Century
// Contest: AtCoder - KYOCERA Programming Contest 2021（AtCoder Beginner Contest 200）
// URL: https://atcoder.jp/contests/abc200/tasks/abc200_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define penguin ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

double n;
int main(void){
	penguin
	cin >> n;
	cout << ceil(n/100) << "\n";
	return 0;
}