#include <iostream>
using namespace std;

int main(){
	int n; // n <= 100
	cin >> n;
	for(int z = 0; z < n; z++){//zセット入る
		int day = 1;
		int y,m,d;//year,month,day
		cin >> y >> m >> d;//input

		if(m%2 == 1 || y%3 == 0){
			day += 20 - d;
		}else{
			day += 19 - d;
		}//dayのずれを埋めた
		for(int i = m+1; i <= 10; i++){
			if(i % 2 == 1 || y%3 == 0){
				day += 20;
			}else{
				day += 19;
			}
		}//monthのずれを埋めた
		for(int i = y+1; i < 1000; i++){
			if(i%3 == 0){
				day += 200;
			}else{
				day += 195;
			}
		}   //生まれ年以外の年の日
		//できたー
		cout << day << endl;
	}
	return 0;
}