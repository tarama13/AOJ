#include <iostream>
using namespace std;
main() {
	int n, a[100];
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	for (int i=n-1; i>0; i--) cout << a[i] << " ";
	cout << a[0] << endl;
}
