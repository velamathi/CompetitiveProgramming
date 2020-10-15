#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> lucky = { 4,7, 44, 47, 74,77, 447, 477, 747, 777 };
	int n;
	cin >> n;
	int checker = 0;
	for (auto it: lucky){
		 if ((n%it) == 0){
			 checker = 1;
		 }
	 }
	if (checker ==1) cout << "YES"<<"\n";
	else cout <<"NO"<<"\n";

	return 0;
}
