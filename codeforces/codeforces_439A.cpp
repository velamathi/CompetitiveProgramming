#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	int a[n];
	for (int i=0; i<n; i++) cin>>a[i];
	int ctr=0;
	int total=0;
	int invl=0;
	for (int i=0; i<n; i++){
		total+=a[i];
		
		if ( (i==n-1) && (total<t)){
			int x = (t - total)/5;
			ctr +=x;
			break;
			}
		else if ( (i==n-1) && (total==t)) break;
		else if (i < t-1) {
			total+=10;
			ctr +=2;
			}
		
		if (total > t){ 
			cout << -1 <<"\n";
			invl = 1;
			break;
		}
	}
	if (invl==0) cout << ctr <<"\n";
	
	return 0;
}
