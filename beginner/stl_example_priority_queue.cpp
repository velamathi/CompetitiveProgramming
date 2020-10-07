#include <bits/stdc++.h>
using namespace std;

int main(){
	//priority queue 
	priority_queue<int> pq;
	pq.push(5);
	pq.push(2);
	pq.emplace(12);
	cout <<pq.top()<<"\n";
	pq.pop();
	cout <<pq.top()<<"\n";
	pq.pop();
	cout <<pq.top()<<"\n";
	// size swap empty function same as others 
	
	//minimum heap 
	 priority_queue <int, vector<int>, greater<int> > aq;
    aq.push(5);
    aq.push(1);
    aq.push(10);
    aq.push(30);
    aq.push(20);
 
    // One by one extract items from min heap
    while (aq.empty() == false)
    {
        cout << aq.top() << " ";
        aq.pop();
    }
	
	
	
	
	
	
	return 0;
}

