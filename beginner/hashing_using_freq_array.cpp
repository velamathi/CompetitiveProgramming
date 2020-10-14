#include <bits/stdc++.h>
#include <string.h>
using namespace std; 


int main(){
	string s;
	cin >>s;
	map<char, int> mpp; 
	int freq[26] = {0};
	for (auto it: s){
		mpp[it]++;
		freq[it -'a']++;
	}
	for (char c='a'; c<='z'; c++){
		cout <<c <<"->" << mpp[c]<<"\n";
		cout << c << "->" << freq[c - 'a'] <<"\n";
	}

	return 0;
}


// 101
// 110
// 100
// 111 
 
