#include <bits/stdc++.h>
using namespace std; 


int main(){
	
	list<int> ls; //{}
	ls.push_back(5); //{5}
	ls.emplace_back(2134); //{5, 2134}
	ls.push_front(43); //{43, 5, 2134}
	ls.emplace_front(43535); //{434535, 43, 5, 2134}
	//same functionality as applicable for vector 
	//begin , end, rbegin, rend, clear, insert, size, swap
	for (auto it: ls){
		cout << it<<"\n";
	}
	cout<< "\n\n\n";
	for ( auto it=ls.begin(); it!= ls.end(); it++){
		cout << *(it)<<"\n";
	}
	
	cout <<"Size:"<<ls.size();
	return 0;
}

