#include <iostream>
#define N 100
using namespace std;
int main(){
	int a[N];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << a[n-1];
	for(int i = n-2; i >= 0; i--){
		cout << " " << a[i];
	}
	cout << endl;
	return 0;
}