#include <iostream>
#include <bitset>
#include <stdio.h>
using namespace std;
bitset <10000001> s;
int main(){
	int n,q;
	cin >> n;
	for(int i = 0; i < n; i++){
		int tmp;
		scanf("%d",&tmp);
		s.set(tmp);
	}
	cin >> q;
	int ans = 0;
	for(int i = 0; i < q; i++){
		int tmp;
		scanf("%d",&tmp);
		ans += s[tmp];
	}
	cout << ans << endl;
	return 0;
}