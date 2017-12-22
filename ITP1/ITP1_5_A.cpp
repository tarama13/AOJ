#include <iostream>
using namespace std;
main() {
	int h, w;
	while (cin >> h >> w, h!=0||h!=w) {
		for (int i=0; i<h; i++) {
			for (int j=0; j<w; j++) cout << "#";
			cout << endl;
		}
		cout << endl;
	}
}
