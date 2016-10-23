#include <iostream>
using namespace std;

int main(){
	int money = 100000;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		money = (int)(money * 1.05);
		if(money % 1000 != 0){
			money = money - money % 1000 + 1000;
		}
	}
	cout << money << endl;
	return 0;
}