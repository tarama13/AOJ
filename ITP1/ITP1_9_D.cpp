#include <iostream>
#include <algorithm>
using namespace std;
main () {
	string str;
	int q;
	cin >> str >> q;
	for (int i=0; i<q; i++) {
		string code;
		int a, b;
		cin >> code >> a >> b;
		if (code == "print") cout << str.substr(a, b-a+1) << endl;
		if (code == "reverse") reverse(str.begin()+a, str.begin()+b+1);
		if (code == "replace") {
				string p;
				cin >> p;
				str.replace(a, b-a+1, p);
		}
	}
}
