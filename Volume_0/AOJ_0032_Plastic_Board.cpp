#include <iostream>
using namespace std;
int main(){
	int a, b, c, x = 0, y = 0;
	char t;
	while(cin >> a >> t >> b >> t >> c){
		if(a*a + b*b == c*c) x++;
		if(a == b) y++;
	}
	cout << x << endl << y << endl;
	return 0;
}