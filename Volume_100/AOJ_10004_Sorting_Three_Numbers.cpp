#include <iostream>
#define N 3
using namespace std;
int main(){
	int a[N], t;
	for(int i=0; i<N; i++){
		cin >> a[i];
	}
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1; j++){
			if(a[j] > a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	cout << a[0];
	for(int i=1;i<N;i++){
		cout << " " << a[i];
	}
	cout << endl;
	return 0;
}