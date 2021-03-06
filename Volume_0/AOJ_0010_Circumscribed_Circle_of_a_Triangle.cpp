#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	//三角形の外心を求める
	//外心：三角形各辺の垂直二等分線が交わる点
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a,b,c,sin2a,sin2b,sin2c,px,py,r;
		a = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);
		b = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
		c = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
		sin2a = a*(-a+b+c);
		sin2b = b*(a-b+c);
		sin2c = c*(a+b-c);
		px = (x1*sin2a + x2*sin2b + x3*sin2c) / (sin2a + sin2b + sin2c);
		py = (y1*sin2a + y2*sin2b +y3*sin2c) / (sin2a + sin2b + sin2c);
		double ra,rb,rc;
		ra = sqrt(a);
		rb = sqrt(b);
		rc = sqrt(c);
		r = sqrt(a*b*c/((ra+rb+rc)*(-ra+rb+rc)*(ra-rb+rc)*(ra+rb-rc)));
		printf("%.3f %.3f %.3f\n",px,py,r);
	}
	return 0;
}