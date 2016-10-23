#include <iostream>
using namespace std;

int log10(int);
int main(){
	int a,b;
	while(cin >> a >> b){
	cout << log10(a+b) << endl;
	}
	return 0;
}

int log10(int x){
	int i = 1;
	while(1){
		if(x/10 >= 1){
			i++;
			x = x / 10;
		}else{
			break;
		}
	}
	return i;
}