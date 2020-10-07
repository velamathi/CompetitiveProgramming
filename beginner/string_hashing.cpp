#include <bits/stdc++.h>
#include <string.h>
using namespace std; 


int main(){
	string s;
	cin >>s;
	map<char, int> mpp; 
	for (auto it: s){
		mpp[it]++;
	}
	for (char c='a'; c<='z'; c++){
		cout <<c <<" ->" << mpp[c]<<"\n";
	}

	return 0;
}

 
