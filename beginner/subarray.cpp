#include <bits/stdc++.h>
using namespace std; 

int main(){
	
	int n;
	cout <<"Enter the number of elements in the array"<<"\n";
	cin >> n; 
	int a[n];
	//Subarray printing 
	cout << "Enter the array"<<"\n";	
	for (int i=0; i<n; i++){
		cin>> a[i];
	}
	
	for ( int i=0; i<n; i++){
		
	for(int j=i; j<n; j++){
		for (int k=i; k<=j; k++){
			cout << a[k] <<" " ; 
		}
		cout <<"\n";
	}
}
	return 0;
}
