#include <iostream>
using namespace std;
int main() {
	int a[3];
	for (int i=0; i<3; i++) cin >> a[i];
	for (int i=0; i<3; i++) {
		for (int j=0; j<i; j++) {
			if (a[i] < a[j]) {
				int tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	cout << a[0];
	for (int i=1; i<3; i++) cout << " " << a[i];
	cout << endl;
	return 0;
}
