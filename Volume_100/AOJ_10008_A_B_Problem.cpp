#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int a,b,d,r;
	double f;
	cin >> a >> b;
	r = a % b;
	d = (a - r)/b;
	f = (double)a/(double)b;
	printf("%d %d %.5f\n",d,r,f);
	return 0;
}