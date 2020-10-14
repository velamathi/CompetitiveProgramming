#include <bits/stdc++.h>
using namespace std; 


int main(){
	
	int a, b;
	cin >> a>>b;
	cout << __gcd(a,b) << "\n";
	
	while (a &&b) {
		if (a>b) a=a%b;
		else b=b%a;
	}
	if (a!=0)cout <<a;
	else cout <<b;
	
	return 0;
	
	
}

