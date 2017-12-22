#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
main () {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	printf("%.6f\n", sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
}
