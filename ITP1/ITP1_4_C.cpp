#include <iostream>
using namespace std;
main() {
	int a, b;
	char op;
	while (cin >> a >> op >> b, op != '?')
		cout << (op=='+'?a+b : op=='-'?a-b : op=='*'?a*b : a/b) << endl;
}
