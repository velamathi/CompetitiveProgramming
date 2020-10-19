#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int direction = 0;
	for (int i = 0; i < n; i++){
		for (int j=0; j<m;j++){
			if ((i%2)==0) cout << "#";
			else{
				if ( direction==0 && (j!=(m-1)) ) cout << ".";
				else if ( direction==0 && (j==(m-1)) ) {
					cout <<"#";
					direction =1 ;
				}
				else if ( direction==1 && (j==0)) cout <<"#";
				else if ( direction==1 && (j<(m-1)))cout <<".";
				else if ( direction==1 && (j==(m-1)) ) {
					cout <<".";
					direction =0;
				}
			}
		}
		cout << "\n";
	}
			 
	return 0;
}
