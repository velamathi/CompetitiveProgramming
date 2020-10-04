#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	int k; 
	cin >> n; 
	k=1; 
	for (int i=1; i<=n; i++){
		for (int j=1; j<=k; j++){
			cout <<j <<" "; 
			}
		if( i >n/2)
			k--;
		else
			k++;
		cout <<"\n";
	}
	return 0;
}

