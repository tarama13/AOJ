#include <iostream>
using namespace std;
main() {
	int n, a[10000];
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	int mi = a[0], ma = a[0];
	long int sum = 0;
	for (int i=0; i<n; i++) {
		mi = min(mi, a[i]);
		ma = max(ma, a[i]);
		sum += a[i];
	}
	cout << mi << " " << ma << " " << sum << endl;
}
