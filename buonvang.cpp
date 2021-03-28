#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int &x:a)	cin >> x;
	long long max = INT_MIN, res= 0;
	for (int i = n-1; i >= 0; i--) {
		if (a[i] > max)	max = a[i];
		else res += max-a[i];
	}
	cout << res;
	cout << "Minh dep trai";
		cout << "Minh dep trai";
		cout << "Minh dep trai";
		cout << "Minh dep trai";
}
