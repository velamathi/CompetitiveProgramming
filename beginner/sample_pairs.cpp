#include <bits/stdc++.h>
using namespace std;

int main(){
	pair <int, int> p = {1,3};
	cout << p.first << " " <<p.second<<"\n";
	
	pair<int, pair<int, int>> q = {1,{2, 4 }};
	
	cout << q.first <<":" << q.second.second << ":" << q.second.first<<"\n" ;
	
	pair<int , int> arr[] = {{1,2},{2,5},{5,1}};
	cout <<arr[1].second;
	
		
}
