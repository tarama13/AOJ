#include <iostream>
using namespace std;

int solver(int p, int q, int a, int n, int now){
	int ans = 0;
	if(p == 0) return 1;
	if(n == 0 || p <= 0) return 0;
	for(int i = max(now, q/p); i <= a; i++){
		int tp = p*i-q, tq = q*i;
//		cout << p << "/" << q << " - 1/" << i << " = " << tp << "/" << tq << endl;
//		cout << "a: " << a << " n: " << n << endl;
		ans += solver(tp, tq, a/i, n-1, i);
	}
	return ans;
}
int main(){
	int p, q, a, n;	// p/q を n 個
	while(cin >> p >> q >> a >> n, p){
		cout << solver(p, q, a, n, 1) << endl;
	}
	return 0;
}