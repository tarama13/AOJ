#include <iostream>
#define N 100
using namespace std;
int saiki(int n){
	if(n){
		int a;
		cin >> a;
		n--;
		saiki(n);
		if(n){
			cout << " ";
		}
		cout << a;
	}
	return 0;
}
int main(){
	int n;
	cin >> n;
	saiki(n);
	cout << endl;
	return 0;
}