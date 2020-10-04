#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	cout << n << " " << m; 
	cout <<"\n";
	for(int i = 1;i<=n;i++) {
	    for(int j = 1;j<=i;j++) {
	        cout << j << " "; 
	    }
	    cout << endl; 
	}
	
	return 0;
}
