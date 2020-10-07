
#include <bits/stdc++.h>
using namespace std;


int main(){
	//vector - can be used when you don't know the size 
	// vector size can be changed whenever needed	
	vector<int> v; 
	v.push_back(1);  // {1}
	v.emplace_back(2); //{1,2}
	
	//vector of pairs 
	vector <pair <int, int>> vec;
	vec.push_back({1,2}); //{{1,2}}
	vec.emplace_back(3,4); //{{1,2}, {3,4}}
	
	//vector of size 5 with ever element as 100  
	vector <int> vic(5,100); //{100,100,100,100,100}
	//vector intialized with a value of zero 
	vector <int> ve(5); //{0,0,0,0,0}
	
	
	vector <int> v1(5,20); //{20,20,20,20,20}
	//v2 will inherit all the vectors of v1 a copy of all the values
	vector <int> v2(v1); // {20,20,20,20,20}
	vector <int> v3 = {10, 20, 30, 40, 50};  // {20,20,20,20,20}
	
	
	vector <int>::iterator it = v3.begin();
	cout << *(it) << " ";
	it++;
	cout<< *(it) <<" " ;
	it = it + 2 ; 
	cout << *(it) << " "; 
	
	//~ vector <int>::iterator it1 = v.end(); 
	//~ vector <int>::iterator it2 = v.rend();
	//~ vector <int>::iterator it2 = v.rbegin();
	cout << v3[0] << "\n" << v.at(0)<<"\n";
	cout <<v3.back() << "\n";

		for (vector<int>::iterator it = v3.begin(); it!=v3.end(); it++)
		{
			cout << *(it) <<" ";
		}
		cout << "\n\n\n";  
		
		for (auto it = v3.begin(); it!=v3.end(); it++){
			cout << *(it) << " " ;
		}
		cout <<"\n";
		for( auto it: v2){
			cout << it <<" " ;
		}
	vector <int> viv = {10, 20, 12, 23};
	viv.erase(viv.begin()); //{ 10, 20, 12, 23 }
	for (auto it:viv){
		cout << it << " ";
	}
	cout <<"\n";
	vector <int> viv1 = {10, 20, 12, 23, 121, 34, 231};
	viv1.erase(viv1.begin()+2, viv1.begin() + 4); //{ 10, 20,  }
	cout <<"\n";
	for (auto it:viv1){
		cout << it << " ";
	}
	
	
	//vector insertion  function
	vector<int>veer(2,100); // {100, 100} 
	veer.insert(veer.begin(), 300); //{ 300, 100, 100}
	veer.insert(veer.begin()+1, 2, 10); //{300, 10, 10, 100, 100} 
	cout <<"\n";
	
	for (auto it:veer)
	{
		cout << it << " ";
	}
	cout <<"\n";
	cout << "Size of the vector :" << veer.size()<<"\n";
	
	vector<int> copy(2,50);
	
	veer.insert(veer.begin(), copy.begin(), copy.end());
	cout << veer.size() <<"\n";
	for (auto it: veer){
		cout << it<< " " ;
	}
	//removing the element from the last position
	cout <<"\n";
	veer.pop_back();
	for (auto it: veer){
		cout << it<< " " ;
	}
	cout<<"\n";
	vector <int>v11 ={112,2123};
	vector <int>v22 ={565,7643};
	//swapping values of vector
	v22.swap(v11);
	for (auto it: v22){
		cout << it<< " " ;
	}
	//clears the vector 
	v22.clear();
		
	cout <<"\n" << v22.empty();
	
	
}
