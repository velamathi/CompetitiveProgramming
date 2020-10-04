#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	int q ;
	int l,r;
	
	cin>>n; 
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	
	int pre[n];
	for (int i=0; i<n; i++){
		if (i==0) pre[i] = a[i];
		else{
			pre[i] = pre[i-1] + a[i];
		}
	}
	
	cout << "Queries"<<"\n";
	cin >> q;
	while (q--){
		cout << "Enter the Left limits" <<"\n";
		cin >> l >>r;
		long long sum = pre[r]; 
		if (l>0) sum = pre[r] - pre[l-1];
		cout << sum << "\n";
	}
	
	
	
	return 0;
	
}

