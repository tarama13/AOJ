#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	while(cin >> a, a != "0"){
		int sum = 0;
		for(int i = 0; i < a.length(); i++){
			sum += (int)a[i]-48;
		}
		cout << sum << endl;
	}
	return 0;
}