#include <bits/stdc++.h>
using namespace std;

int main(){
	deque<int> dq; 
	dq.push_back(1); //{1}
	dq.emplace_back(121); //{1, 124}
	dq.push_front(24); //{24, 1, 124}
	dq.emplace_front(34); //{34, 24, 1, 124}
	for (auto it: dq) cout << it <<"\n";
	dq.pop_back();
	cout <<"\n";
	for (auto it: dq) cout << it <<"\n";
	dq.pop_front();
	cout <<"\n";
	for (auto it: dq) cout << it <<"\n";
	dq.back();
	cout << dq.back();
	cout <<"\n";
	for (auto it: dq) cout << it <<"\n";
	dq.front();
	cout <<"\n";
	for (auto it: dq) cout << it <<"\n";
	return 0;
}

