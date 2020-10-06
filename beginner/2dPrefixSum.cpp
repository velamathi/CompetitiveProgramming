#include <bits/stdc++.h>
using namespace std; 

int main(){
	int n, m; 
	cin >> n >>m;
	int a[n][m];
	//Get the input array 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) cin >> a[i][j];
	}
	//calculating the prefix sum of the array
	int presum[n][m];
	for (int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if (i==0 && j==0) presum[i][j] = a[i][j];
			else if (i==0){ 
				presum[i][j] = presum[i][j-1] + a[i][j];
			}
			else if (j==0){
				presum[i][j] = presum[i-1][j] + a[i][j];
			}
			else{
				presum[i][j] = presum[i-1][j] + presum[i][j-1] + a[i][j] - presum[i-1][j-1];
			}
		}
	}
	
	
	cout <<"\n\n\n\n";
	//displaying the prefix sum array
	for (int i=0; i<=n; i++){
		for (int j=0; j<=m; j++){
			cout<<presum[i][j]<<" "; 
		}
		cout <<"\n";
	}
	
	//Adding new lines between the new inputs
	cout <<"\n";
	
	
	int q;
	cin >>q;
	while(q--){
		int x1, y1, x2, y2;
		cin >>x1 >> y1 >> x2>>y2;
		int sum = presum[x2][y2];
		if (x1-1>=0) sum -= presum[x1-1][y2];
		if (y1-1>=0) sum -= presum[x2][y1-1];
		if (x1-1>=0 && y1-1>=0) sum += presum[x1-1][y1-1];
		cout << sum <<"\n";
	
	return 0;
}	
	


