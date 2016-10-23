#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool card[4][13];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			card[i][j] = false;
		}
	}
	for(int i = 0; i < n; i++){
		int num;
		char mark;
		cin >> mark >> num;
		switch(mark){
			case 'S':
				card[0][num-1] = true;
				break;
			case 'H':
				card[1][num-1] = true;
				break;
			case 'C':
				card[2][num-1] = true;
				break;
			case 'D':
				card[3][num-1] = true;
				break;
		}
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			if(card[i][j] == false){
				switch(i){
					case 0:
						cout << "S" << " " << j+1 << endl;
						break;
					case 1:
						cout << "H" << " " << j+1 << endl;
						break;
					case 2:
						cout << "C" << " " << j+1 << endl;
						break;
					case 3:
						cout << "D" << " " << j+1 << endl;
						break;
				}
			}
		}
	}
	return 0;
}