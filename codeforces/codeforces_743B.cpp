#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	long long b;
	string s, pre_s;
	vector <int> vec, pre_vec;
	
	cin >> a >>b;
	for(int i=0; i<a; i++){
		if (i==0) vec.emplace_back(1);
		else{
			pre_vec = vec;
			vec.emplace_back(i+1);
			vec.insert(vec.end(), pre_vec.begin(), pre_vec.end());
		}
	}
	int ct = 0;
	int fv ;
	for (auto it:vec){
		if (ct==b-1) fv=it;
		ct++;
	}
	cout << fv <<"\n";
	return 0;
}
