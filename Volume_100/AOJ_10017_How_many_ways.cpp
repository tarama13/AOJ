#include <iostream>
using namespace std;
int main(){
	int n,x;
	while(cin >> n >> x,n){
		int sum = 0;
		for(int k = 1; k <= n; k++){
			for(int i = k+1; i <= n; i++){
				for(int j = i+1; j <= n; j++){
					if(k+i+j == x){
						sum ++;
						break;
					}
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}