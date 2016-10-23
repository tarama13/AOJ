#include <iostream>
#define N 9
using namespace std;
int solver(int n, int s, int t){	//t以上の数n個でsになる組み合わせの数
	if(n == 0 || s < 0 || t > N) return 0;
	if(n == 1 && s == t) return 1;
	return solver(n-1, s-t, t+1) + solver(n, s, t+1);
}
int main(){
	int n, s;
	while(cin >> n >> s, n){
		cout << solver(n, s, 0) << endl;
	}
	return 0;
}