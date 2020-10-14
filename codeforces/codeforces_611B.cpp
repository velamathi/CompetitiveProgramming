#include <iostream>
#include <unistd.h>
using namespace std;
typedef long long int ll;

int countUnSetBits( int n) 
{ 
	//~ int q;
	//~ q = n;
	unsigned int count = 0; 
	while (n != 0) {
	    if ((n &1) == 0)
	       count++;
	    n = (n>>1);      
	} 
	//~ cout << "Number :" <<q << " count :" << count << "\n";
	
	return count; 
} 


int main(){
	ll a, b;
	cin >> a >> b;
	int number_count=0;
	int num; 
	for (ll i=a; i<=b; i++){
		num = countUnSetBits(i);
		if (num ==1) {
			number_count +=1;
		}
	}
	cout << number_count <<"\n";
	return 0;
}
