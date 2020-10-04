#include <bits/stdc++.h>
using namespace std; 

int main(){
	int n;
	cin >> n;
	int a[n]; 
	int maxiSum = 0;
	
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	int k;
	cout <<"Enter the Window Size"<<"\n";
	cin>> k;
	
	//Sliding Window 
	int sum=0;
	for (int i=0; i<k; i++) sum += a[i];
	
	int l=0, r = k-1;
	maxiSum= sum; 
	cout <<sum <<"\n";
	while ( r < n-1){
		r++;
		sum +=a[r];
		sum -=a[l];
		l++;
		cout << sum <<"\n";
	maxiSum = max(maxiSum, sum);
	}
	cout << maxiSum <<"\n";	
	
	return 0;
}

