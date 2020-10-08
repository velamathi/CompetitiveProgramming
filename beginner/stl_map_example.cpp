#include <bits/stdc++.h>
using namespace std; 

int main(){
	//{key, value}
	
	map<int, int> mpp;
	//~ map<int, pair<int, int>> mpp;
	//~ map< pair<int, int>, int > mpp;
	
	//key values can be anything 
	
	mpp[1] =2 ;
	//~ mpp.emplace({3,1});
	mpp.insert({2,4});
	mpp.insert({6,12});
	mpp.insert({3,1});
		
	for (auto it: mpp){
		cout << it.first << " " << it.second << "\n";
	}
	
	cout << mpp[1];  //print 2 
	cout << mpp[5];  // print 0, since it does not exist
	
	auto it = mpp.find(3);
	//~ cout << it <<"\n";
	
	auto lb = mpp.lower_bound(2); 
	auto ub = mpp.upper_bound(3);
	
	//erase, swap, size, empty, are same as above
	return 0;
}
