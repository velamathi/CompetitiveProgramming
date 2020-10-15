#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cin >>a[i];
	}
	
	int powsize = (1<<n);
	int check =0;
	for (int i=0; i<powsize; i++){
		int sum =0;
		for (int j=0; j<n; j++){
			if ((i & (1<<j)) !=0) {
				sum +=a[j];
			}
			else {
				sum -=a[j];
			}
		}
		if (sum==0 || sum%360==0){
			cout << "YES" <<"\n";
			check =1;
			break;
		}
	}
	
	if (check ==0) cout <<"NO" <<"\n";
		
		
	return 0;
}
