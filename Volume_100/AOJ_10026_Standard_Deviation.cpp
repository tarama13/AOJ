#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	int n;
	while(cin >> n, n){
		double s[1000], m = 0, a = 0;
		for(int i = 0; i < n; i++){
			cin >> s[i];
			m += s[i];
		}
		m /= n;
		for(int i = 0; i < n; i++){
			a += (s[i] - m) * (s[i] - m);
		}
		a /= n;
		printf("%.5f\n", sqrt(a));
	}
	return 0;
}