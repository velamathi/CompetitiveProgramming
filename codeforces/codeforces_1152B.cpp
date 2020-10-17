#include <bits/stdc++.h>
using namespace std;

int closest_power(int a){
	int num, diff, prev_diff;
	int prev_num;
	prev_diff =0;
	for (int i=0; i<=40;i++){
		num = (1<<i)-1;
		if (i==0) prev_diff = a - num;
		else {
			diff = a - num; 
			if (diff < prev_diff && diff >0){
				prev_diff = diff;
				prev_num = num;
			}
			else if ( diff < prev_diff && diff<0){
				return i-1;
			}
		}
	}
}

int main(){
	long long int a;
	vector <int> longcat;
	cin >> a;
	for (int i=0; i<=20; i++)
		longcat.push_back((1<<(i+1)) -1 ); 

	if (find(longcat.begin(), longcat.end(), a) != longcat.end()) {
		cout << 0<<"\n";
		return 0;
	}
	int n = closest_power(a);
	cout << n<<"\n";
	cout << "Closest number " << ((1<<n)-1)<<"\n";
	
	//~ int ctr = 0;
	vector <int> num_check;
	//~ int checker=0;
	int tmp_result , steps;
	tmp_result = ( a^((1<<n)-1) );
	cout << "temp result :" << tmp_result <<"\n";
	int counter =40;
	steps =0;
	while(counter--){
		steps++;
		cout <<"Counter :"<<counter<<"\n";
		if(counter%2==1) {
			tmp_result += 1;
			cout <<"Current Result :"<< tmp_result<<"\n";
		}
		else{
			int n = closest_power(tmp_result);
			cout << "Closes power" << n <<"\n";
			num_check.push_back(n);
			tmp_result = (tmp_result^((1<<n)-1));
			cout <<"current result :"<< tmp_result<<"\n";
		}
		if (find(longcat.begin(), longcat.end(), a) != longcat.end())break;
		
	}
	cout << steps<<"\n";
	for (auto it: num_check){
		cout << it << " " ;
	}
	return 0;
}
