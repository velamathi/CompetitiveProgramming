#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5][5];
	int set_x, set_y;
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			cin >> a[i][j];
			if (a[i][j] ==1){
				set_x =i;
				set_y =j;
			}
		}
	}
	//~ cout << set_x << " " << set_y<<"\n";
	int steps =0;
	while( set_x != 2 || set_y !=2){
		if (set_x > 2){
			steps++;
			set_x--;
		}
		else if (set_x <2){
			steps++;
			set_x++;
		}
		else if (set_y>2){
			steps++;
			set_y--;
		}
		else if (set_y<2){
			steps++;
			set_y++;
		}
		//~ cout << set_x << " " << set_y << "\n";
	}
	cout << steps <<"\n";
	
			
	return 0;
}
