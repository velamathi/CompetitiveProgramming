#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int>p1, pair<int, int> p2){
	//zero is false 
	//one is true 
	if (p1.second < p2.second){
		return true;
	} else if(p1.second == p2.second){
		if(p1.first>p2.second) return true;
	}
	return false;
}

int main(){
	
	//~ sort(a+2, a+4); // [first, last)
	//~ sort(a. a+n, greater<int>); //sorted(list, key=lambda x: x[0])
	pair<int, int> a[] = { {1,2},{2,1},{4,1}};
	sort(a, a+2, comp);
	//{ {4,1}, {2,1}, {1,2}}
	
	int num =7;
	int cnt =__builtin_popcount();
	
	long long num = 1657865786578687;
	int cnt = __builtin_popcountll();
	
	string s ="123";
	
	do {
		cout << s<< "\n";
	}while(next_permutation(s.begin(), s.end()));
	
	
	//maximum in the given range 
	
	int maxi = *max_element(a, a+n);
	
	return 0;
}

