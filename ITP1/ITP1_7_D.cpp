#include <iostream>
#define N 100
using namespace std;
main () {
	long long n, m, l, a[N][N], b[N][N], c[N][N] = {};
	cin >> n >> m >> l;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) cin >> a[i][j];
	for (int i=0; i<m; i++)
		for (int j=0; j<l; j++) cin >> b[i][j];
	
	for (int i=0; i<n; i++)
		for (int j=0; j<l; j++)
			for (int k=0; k<m; k++)
				c[i][j] += a[i][k] * b[k][j];

	for (int i=0; i<n; i++) {
		cout << c[i][0];
		for (int j=1; j<l; j++) cout << " " << c[i][j];
		cout << endl;
	}
}
