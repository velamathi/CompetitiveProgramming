#include <bits/stdc++.h>
using namespace std; 

int main(){
	vector<char> vowels {'a', 'e','i','o','u','y'};
	vector <char> finalstring;
	string st;
	cin >> st;
	transform(st.begin(), st.end(), st.begin(), ::tolower);
	for (auto it: st){
		//~ cout << it <<"\n";
		if (find(vowels.begin(), vowels.end(), it) == vowels.end())
			cout << "." <<it;
	}
	return 0;
}
