#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int ball = 10;		//ボールの数
		int n,k;		//n:セットの数 k:メモ
		cin >> n;
		queue<int> a; //開口部Ａ

		for (int i=0; i < n; i++){					 //1セットのループ
				int b = 0 , c = 0;	//筒Ｂ、筒Ｃ
				for (int j=0; j < ball; j++){
						cin >> k;
						a.push( k );
				}
				b = a.front();
				a.pop();		//最初の一個

				for (int j=0; j < (ball-1); j++){				//ボールのループ
						if (a.front() > b && a.front() > c){	//どっちも乗せられる
								if (a.front() - b > a.front() - c){
										c = a.front();
								}else{
										b = a.front();	//差の小さい方に乗せる
								}
						}else if(a.front() > b){
								b = a.front();

						}else if(a.front() > c){
								c = a.front();

						}else {
								cout << "NO" << endl;
								while(1){
										if(a.empty()){
												break;
										}else{
												a.pop();
										}							 //中身を空に
								}
								break;	//終了
						}

						a.pop();		//乗せた
						if (a.empty()){		 //最後まで乗せた
								cout << "YES" << endl;
								while(1){
										if(a.empty()){
												break;
										}else{
												a.pop();
										}
								}
						}
				}
		}

		return 0;
}