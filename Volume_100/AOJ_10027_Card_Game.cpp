#include <iostream>
#include <string>
using namespace std;
int main(){
	int n, t = 0, h = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		string a,b;
		cin >> a >> b;
		if(a == b){
			t++;
			h++;
		}else{
			(a > b)? t += 3: h += 3;
		}
	}
	cout << t << " " << h << endl;
	return 0;
}