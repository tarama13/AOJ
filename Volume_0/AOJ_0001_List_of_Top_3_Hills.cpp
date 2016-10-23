#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int first,second,third;
	int a[10];
	for(int i = 0; i < 10; i++){
		cin >> a[i];
	}
	sort(a,a+10);
	first = a[9];
	second = a[8];
	third = a[7];

	cout << first << endl;
	cout << second << endl;
	cout << third << endl;

	return 0;
}