#include <bits/stdc++.h>
using namespace std;

int main(){
	//first in first out
	queue<int> qu;
	qu.push(1); // {1}
	qu.push(2); //{1,2}
	qu.push(4); //{1,2,4}
	qu.back() +=5 ; //{1,2,9}
	cout << qu.back()<<"\n";
	cout << qu.front()<<"\n";
	qu.pop(); //{2,9}
	cout<<qu.front()<<"\n"; 
	qu.pop(); //{9}
	cout<<qu.front()<<"\n"; 
	return 0;
}



