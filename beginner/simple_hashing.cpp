#include <bits/stdc++.h>
using namespace std; 


int main(){
	cout <<"Enter the size of the array"<<"\n";
	int n;
	cin >> n;
	int a[n];
	int maxVal=0;
	for (int i=0; i<n; i++){
		cin >> a[i];
		maxVal = max(a[i], maxVal);
	}
	cout <<maxVal<<"\n\n\n\n";
	
	int freq_array[maxVal] = {0};
	for (int i=0; i<n;i++){
		freq_array[a[i]]++;
	}
	
	for (int i=0; i<=maxVal; i++){
		if (freq_array[i] > 0){
			cout <<freq_array[a[i]]<<"\n";
		}
	}
	
	//cout<<maxVal<<"\n";
	//cout <<freq_array;
	return 0;
}

