#include <iostream>
using namespace std;
main() {
	int h, w;
	while (cin >> h >> w, h!=0||h!=w) {
		for (int i=0; i<h; i++) {
			for (int j=0; j<w; j++)
				cout << ((i+j)%2?'.':'#');
			cout << endl;
		}
		cout << endl;
	}
}
