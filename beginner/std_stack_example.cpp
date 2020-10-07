#include <bits/stdc++.h>
using namespace std;

int main(){
	stack <int> st;
	st.push(1); //{1}
	st.push(5); //{5, 1 } 
	st.push(7);//{7,5,1}
	
	st.emplace(3); //{3,7,5,1}
	cout<<st.top()<<"\n";
	st.pop();
	cout<<st.top()<<"\n";
	cout<< st.size()<<"\n";
	cout<< st.empty()<<"\n";
	stack<int> st1, st2;
	//stack has limited features
	st1.swap(st2);
	
	
	
	return 0;
}


