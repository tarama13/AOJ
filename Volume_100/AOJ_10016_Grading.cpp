#include <iostream>
using namespace std;
int main(){
	int m,f,r;
	while(cin >> m >> f >> r){
		if(m == -1 && f == -1 && r == -1) break;
		if((m == -1||f == -1) || m+f < 30){
			cout << "F" << endl;
		}else if(m+f >= 80){
			cout << "A" << endl;
		}else if(m+f >= 65){
			cout << "B" << endl;
		}else if(m+f >= 50){
			cout << "C" << endl;
		}else if(m+f >= 30){
			if(r >= 50){
				cout << "C" << endl;
			}else{
				cout << "D" << endl;
			}
		}
	}
	return 0;
}