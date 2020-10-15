#include <bits/stdc++.h>
//~ #include <boost/lexical_cast.hpp>// for lexical_cast() 
using namespace std;

int main(){
	map <int, int> ct;
	string st;
	cin >> st; 
	//~ int n;
	//~ int p;
	//~ int a[3];
	//~ int x=0;
	for (auto it: st){
		if (it =='+') continue;
		if (ct.find(it) != ct.end()) ct[it] =1; 
		else{
			auto l = ct.find(it);
			ct[it] = (l->second)++;
		}
	}
	
	for (auto it: ct){
		//~ for (int i=0; i< it.second; i++){
			//~ cout << char(it.first) <<"+";
		//~ }
		cout << char(it.first) <<" " << it.second <<"\n";
	}
	
	
	
	
	return 0;
}
