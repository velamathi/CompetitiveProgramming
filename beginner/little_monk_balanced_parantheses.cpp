#include <bits/stdc++.h>
#include <stack>
using namespace std;


int main(){
	int n;
	cin >> n ; 
	int a[n+1];
	for (int i=1; i<=n; i++) cin >>a[i];
	
	stack <int> st;
	st.push(0);
	int maxLen=0;
	for(int i=1; i<=n; i++) {
		if (a[i]>0) st.push(i);
			else {
			if(st.empty()) st.push(i);
			else{
				int el = st.top();
				st.pop();
				if (a[el] == -(a[i]) ) {
					if (!st.empty())
						maxLen = max(maxLen, i - st.top());
					}
				}
			}
		}
	 cout << maxLen<<"\n";
	return 0;
}

