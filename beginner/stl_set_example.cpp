#include <bits/stdc++.h>
using namespace std;

int main(){
	set<int> st;
	st.insert(1); 
	st.emplace(2);
	st.insert(2); 
	st.insert(4); 
	st.insert(3); 
	
	//stores only unique numbers
	//set is sorted in ascending order
	//begin(), end(), rbegin(), rend(), size(),
	// empty() and swap() are same as other containers
	
	//{1,2,3,4}
	auto pos= st.find(3);
	
	auto it= st.find(6);
	//points to an address after the set as it was 
	//not able to find an element 6 in the set 
	st.erase(5);
	int cnt = st.count(1);
	auto jit = st.find(3);
	st.erase(jit); // it takes constant time
	auto it1 = st.find(2);
	auto it2 = st.find(4);
	st.erase(it1, it2); //after erase {1, 4, 5} [first , last)
	
	return 0;
}


