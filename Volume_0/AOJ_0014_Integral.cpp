#include <iostream>
using namespace std;

int main(){
	int d;
	while(cin >> d){
		int s = 0;
		for(int i = 0; i < 600/d; i++){
			s += (d*i)*(d*i)*d;
		}
		cout << s << endl;;
	}
	return 0;
}