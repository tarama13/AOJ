#include <iostream>
using namespace std;
main() {
	int a, b, c, n = 0;
	cin >> a >> b >> c;
	for (int i=a; i<=b; i++) if (c%i==0) n++;
	cout << n << endl;
}
