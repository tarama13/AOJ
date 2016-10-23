#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int tx, ty;
	double x = 0, y = 0;
	double r, t, ts=0, rad;
	double pi = 3.141592653589793;
	char k;
	rad = pi / 2;
	ts = 90;
	while(1){
		cin >> r >> k >> t;
		if(r == 0 && t == 0){
			break;
		}
		x = x + r*cos(rad);
		y = y + r*sin(rad);
		ts = ts - t;
		rad = ts * pi / 180;
	}
	tx = int(x/1);
	ty = int(y/1);
	cout << tx << endl << ty << endl;

	return 0;
}