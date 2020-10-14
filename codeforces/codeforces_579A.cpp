#include <iostream>
using namespace std;
typedef long long int ll;




int main(){
	ll x, count=0;
	cin>>x;
	while ((x/2)!=0){
		if ((x&1)==1)
			count++;
	
		x = (x>>1); 
	}
	cout << ++count;
	return 0;
		
}
