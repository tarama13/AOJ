#include <iostream>
#define N 100
using namespace std;
main () {
	int r, c, a[N+1][N+1] = {};
	cin >> r >> c;
	for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> a[i][j];
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			a[i][c] += a[i][j];
			a[r][j] += a[i][j];
		}
	}
	for (int i=0; i<r; i++) a[r][c] += a[i][c];

	for (int i=0; i<=r; i++) {
		cout << a[i][0];
		for (int j=1; j<=c; j++) cout << " " << a[i][j];
		cout << endl;
	}
}
