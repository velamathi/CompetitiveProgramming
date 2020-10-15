#include <bits/stdc++.h>
using namespace std;

int main(){
	string st1, st2;
	cin>> st1 >> st2;
	transform(st1.begin(), st1.end(), st1.begin(), ::tolower);
	transform(st2.begin(), st2.end(), st2.begin(), ::tolower);
	int l=st1.length();
	int check =0;
	for (int i=0; i<l;i++){
		if (st1[i] <st2[i]) {
			cout << -1 <<"\n";
			check =1;
			break;
		}
		if (st1[i] > st2[i]){
			cout << 1 <<"\n";
			check =1;
			break;
		}
	}
	if (check ==0) cout <<0 <<"\n";
	
	return 0;
}
