#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int a,b,ctr; 
	cin >> a >>b;
	
	for(int i=0; i<a; i++){
		if (i==0) ctr=1;
		else{
			ctr = 2*ctr + 1;
		}
	}
	
	long long int tctr = ctr;
	long long int upper, lower, ucount; 
	long long int ta, tb;
	ta =a; 
	tb=b;
	while(tb>0){
		upper = 0;
		lower=0;
		if (tb==1) { 
			cout << 1;
			break;
		}
		if (tb > (tctr +1)/2) upper=1;
		else if ((tb < (tctr+1)/2)) lower=1;
		else if ( tb == (tctr + 1)/2) {
			cout <<ta<<"\n"; 
			break;
		}
		
		if (upper==1){
			ucount = (tctr -1)/2 ; 
			tb = tb - (ucount +1);
			tctr -= (ucount+1);
			ta--;
		}
		else if (lower==1){
			ucount = (tctr -1)/2 ;
			tctr -= (ucount+1);
			ta--;
			
		}
	}
	
	return 0;
}
