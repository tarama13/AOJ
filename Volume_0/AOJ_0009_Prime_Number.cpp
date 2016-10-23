#include <iostream>
#define MAX_N 1000000
using namespace std;
int main(){
	bool num[MAX_N];
	for(int i = 1; i < MAX_N; i++){
		num[i] = true;
	}
	num[0] = false;
	for(int i = 1; i < MAX_N; i++){
		if(num[i] == true){
			for(int j = 2*i+1; j < MAX_N; j += (i+1)){
				if((j+1) % (i+1) == 0){
					num[j] = false;
				}
			}
		}
	}
	int n;
	while(cin >> n){
		int prime = 0;
		for(int i = 1; i < n; i++){
			if(num[i] == true){prime++;}
		}
		cout << prime << endl;
	}
	return 0;
}