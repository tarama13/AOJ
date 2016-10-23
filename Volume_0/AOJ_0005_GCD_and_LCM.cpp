#include<iostream>
#include<vector>
using namespace std;

int main(){
	long long a,b;
	while(cin >> a >> b){
		if (a < b){
			long long n = b;
			b = a;
			a = n;
		}
		long long times = a * b;
		vector<int> num;
		long long gcd,lcm;
		while(1){
			long long n;
			n = a % b;
			if(n == 0){
				break;
			}
			a = b;
			b = n;	//ユークリッドの互除法
		}
		gcd = b;
		lcm = times / gcd;
		cout << gcd << " " << lcm << endl;
	}
	return 0;
}