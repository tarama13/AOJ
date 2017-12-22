#include <iostream>
#include <stdio.h>
using namespace std;
main() {
	int a, b;
	cin >> a >> b;
	cout << a/b << " " << a%b << " ";
	printf("%.8f\n", (double)a/b);
}
