#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	double a, b, c, s, l, h;
	cin >> a >> b >> c;
	c *= M_PI/180;
	h = b * sin(c);
	s = a * h / 2;
	l = a + b + sqrt(a * a + b * b - 2 * a * b * cos(c));
	printf("%.5f\n%.5f\n%.5f\n",s,l,h);
	return 0;
}