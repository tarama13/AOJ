#include <iostream>
using namespace std;
main(){
	int x, y;
	while(cin >> x >> y, x!=0||y!=0)
		cout << (x<y?x:y) << " " << (x<y?y:x) << endl;
}
