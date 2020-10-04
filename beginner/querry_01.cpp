#include <bits/stdc++.h>
using namespace std;


int main(){
	
	int n;
	cout << "Print the number of elements in array"<<"\n";
	cin >> n; 
	int a[n];
	cout <<"Please insert the values of the array"<<"\n";
	for (int i=0; i<n;i++) cin >> a[i];
	cout << a;
	
	int q;
	cout <<"Enter the number of Queries";
	cin >> q;
	
	while (q--){
		int l, r ;
		cin >>l >>r;
		int sum=0;
		for (int i=l; i<=r;i++){
			sum=sum + a[i];
		}
		cout << sum;
	}
}
