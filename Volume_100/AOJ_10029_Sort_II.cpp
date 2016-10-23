#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,k;
	vector<int> a;

	cin >> n;

	for (int i = 1; i <= n; i++){
		cin >> k;
		a.push_back(k);
	}

	sort(a.begin(),a.end());

	for (int i = 1; i <= n; i++){
		cout << a[i-1];
		if(i != n){
			cout << " ";
		}else{
			cout << endl;
		}
	}

	return 0;
}