#include <iostream>
using namespace std;
int main(){
	int alpha[26];
	for(int i = 0; i < 26; i++){
		alpha[i] = 0;
	}
	char a;
	while(cin >> a){
		if((int)a >= 65 && (int)a <= 90){
			alpha[(int)a - 65]++;
		}else if((int)a >= 97 && (int)a <= 122){
			alpha[(int)a - 97]++;
		}
	}
	for(int i = 0; i < 26; i++){
		cout << (char)(i+97) << " : " << alpha[i] << endl;
	}
	return 0;
}