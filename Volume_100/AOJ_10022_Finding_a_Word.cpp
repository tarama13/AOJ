#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
	string w,t;
	int c = 0;
	cin >> w;
	for(int i = 0; i < w.length(); i++) w[i] = (char)tolower(w[i]);
	while(cin >> t, t != "END_OF_TEXT"){
		for(int i = 0; i < t.length(); i++) t[i] = (char)tolower(t[i]);
		if(w == t) c++;
	}
	cout << c << endl;
	return 0;
}