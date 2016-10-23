#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double a,b,c,d,e,f;
	while(cin >> a >> b >> c >> d >> e >> f){
		if(a == 0){
			swap(a,d);
			swap(b,e);
			swap(c,f);
		}
		b /= a;
		c /= a;
		a = 1;
		if(d != 0){
			e -= b*d;
			f -= c*d;
			d = 0;
		}
		f /= e;
		e = 1;
		c -= b*f;
		b = 0;
		printf("%.3f %.3f\n",c,f);
	}
}