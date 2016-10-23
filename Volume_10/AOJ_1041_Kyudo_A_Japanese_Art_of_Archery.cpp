#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int sum = 0;
		for(int i = 0; i < n/4; i++){
			int a;
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
	return 0;
}