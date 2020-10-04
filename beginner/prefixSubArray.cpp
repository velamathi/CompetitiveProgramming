#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n;
	int k;
	
	cout <<"Enter the Array size :"<<"\n";
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++)
	{
		cin>> a[i];
	}
	cout << "Enter the Sub-Array size"<<"\n";
	cin >> k; 
	int preS[n];
	for (int i=0; i<n; i++)
	{
		if (i==0)  preS[i] = a[i];
		else preS[i]= preS[i-1] + a[i];
	}
	int maxiSum = 0;
	for (int i=0; i<=n-k; i++){
		int l = i; 
		int r = i + k - 1;
		int sum = preS[r];
		if (l>0) sum = sum - preS[l-1];
		maxiSum = max(maxiSum, sum); 
	}
	cout <<maxiSum<<"\n";
	return 0;
}
