#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	string top = "~";
	for(int i = 0; i < n; i++){
		string tmp;
		cin >> tmp;
		top = min(top,tmp);
	}
	cout << top << endl;
	return 0;
}