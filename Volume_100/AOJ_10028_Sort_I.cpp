#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n, s[1000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	sort(s,s+n);
	cout << s[0];
	for(int i = 1; i < n; i++){
		cout << " " << s[i];
	}
	cout << endl;
	return 0;
}