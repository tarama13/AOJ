#include <iostream>
using namespace std;
main() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {
		if (i%3==0) cout << " " << i;
		else {
			int x = i;
			while (x) {
				if (x%10==3) {
					cout << " " << i;
					break;
				} else x /= 10;
			}
		}
	}
	cout << endl;
}
