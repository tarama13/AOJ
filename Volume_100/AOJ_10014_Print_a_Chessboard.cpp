#include <iostream>
using namespace std;
int main(){
	int h, w;
	while(cin >> h >> w, h){
		bool c;
		for(int i = 0; i < h; i++){
			i % 2 == 0 ? c = true : c = false;
			for(int j = 0; j < w; j++){
				if(c){
					cout << "#";
					c = false;
				}else{
					cout << ".";
					c = true;
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}