#include <iostream>
using namespace std;
int main(){
	int n, q, t, c = 0;
	bool s[500];
	for(int i = 0; i < 500; i++){
		s[i] = false;
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		s[tmp-1] = true;
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> t;
		if(s[t-1]) c++;
	}
	cout << c << endl;
	return 0;
}