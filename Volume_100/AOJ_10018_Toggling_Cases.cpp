#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i = 0; i < s.length(); i++){
		if(islower(s[i])){
			cout << (char)toupper(s[i]);
		}else if(isupper(s[i])){
			cout << (char)tolower(s[i]);
		}else{
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}