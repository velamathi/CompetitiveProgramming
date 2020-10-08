#include <bits/stdc++.h>
using namespace std;

int main(){
	//everything is same as set 
	//only stores duplicate elements also
	// in sorted order 
	multiset<int> ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(6);
	ms.insert(7);
	ms.insert(1);
	//~ ms.erase(1); // all 1's erase
	
	//~ int cnt = ms.count(1);
	
	//only one one erased
	ms.erase(ms.find(1));
	
	//~ ms.erase(ms.find(1),  ms.find(1)+1);
	//rest all functions are same as set  
	for (auto it: ms) cout << it <<" ";
	
	
	return 0;
}



