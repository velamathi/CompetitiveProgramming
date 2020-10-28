#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool balanceCheck(string s){
	int len = s.size();
	stack <char> st; 
	for (int i=0; i<len; i++){
		if (s[i]=='(' || s[i] =='[' || s[i] =='{') st.push(s[i]);
		else{
			if (st.empty()) return false; 
			if ( (s[i]==')' && st.top() =='(') || (s[i]==']' && st.top() =='[') || (s[i]=='}' && st.top() =='{') ) {
				st.pop();
			}
			else {
				return false;
			}
		}
	}
	if (st.empty()) return true; 
	else return false; 
}




int main(){
	string s;
	cin >> s;
	if ( balanceCheck(s) )  cout <<"Balanced"<<"\n";
	else {
		cout <<"Not Balanced"<<"\n";
	}
	return 0;
}
