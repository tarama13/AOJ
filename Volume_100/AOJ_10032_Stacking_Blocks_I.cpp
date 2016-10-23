#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	string order;
	stack<char> st;
	while(cin >> order, order != "quit"){
		if(order == "push"){
			char color;
			cin >> color;
			st.push(color);
		}else{
			cout << st.top() << endl;
			st.pop();
		}
	}
	return 0;
}