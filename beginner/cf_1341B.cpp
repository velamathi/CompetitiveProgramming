#include <iostream>
using namespace std; 

int main(){
	int q;
	cin >> q; 
	while(q--){
	int n, k; 
	
	//cout << "Enter the Size of the array"<<"\n";
	cin >> n>> k;
	int a[n];
	for (int i=0; i<n; i++) {
		cin>>a[i]; 
	}
	
	int l=0, r=k-1; 
	int peaks = 0;
	//compute for the first subarray
	for (int i=1; i<k-1; i++){
		if (a[i]> a[i-1] && a[i]>a[i+1]) peaks++;
		}
	int maxPeaks = peaks;
	int ind = 0;
	int maxIndx = 0; 
	while(r<n-1){
		ind++;
		if ( a[r]> a[r-1] && a[r] > a[r+1]){
			peaks++;
		}
		r++;
		l++;
		if (a[l] > a[l-1] && a[l] > a[l+1]){
			peaks--;
		}
		if (maxPeaks< peaks){
			maxPeaks = peaks;
			maxIndx = ind;
		}
		
	}
	
	cout << maxPeaks+1 <<" " << maxIndx+1 <<"\n";
}
	return 0;
}
