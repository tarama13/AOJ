#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	while(cin >> s, s != "-"){
		int n, sum = 0;
		cin >> n;
		for(int sh, i = 0; i < n; i++){
			cin >> sh;
			sum += sh;
		}
		sum %= s.size();
		s = s.substr(sum,s.size()-sum) + s.substr(0,sum);
		cout << s << endl;
	}
	return 0;
}