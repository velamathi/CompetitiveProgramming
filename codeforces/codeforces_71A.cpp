#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--){
		string str;
		cin >> str;
		int len;
		len = str.length();
		if (len>10){
			cout << str[0] <<len-2<<str[len-1]<<"\n";
		}
		else cout << str<<"\n";
	}
	return 0;
}

