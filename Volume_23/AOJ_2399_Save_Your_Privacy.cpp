#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n;
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}

		int m[100];
		int p[100][100];
		int k;
		int l[100];
		bool man[100];
		queue<int> mannom;

		for(int i = 0; i < n; i ++){
			cin >> m[i];
			for(int j = 0; j < m[i]; j++){
				cin >> p[i][j];
			}
		}
		cin >> k;
		for(int i = 0; i < k; i++){
			cin >> l[i];
		}	//input

		//犯人捜し
		int know = 0;
		for(int i = 0; i < n; i++){	//人数

			for(int a = 0; a < m[i]; a++){	//知っている情報 漏えいした情報を知っている情報と比べる
				for(int j = 0; j < k; j++){	//漏えい
					if(l[j] == p[i][a]){
						know ++;
					}
				}
			}

			if(know == k){
				man[i] = true;
				know = 0;
			}else{
				man[i] = false;
				know = 0;
			}

		}

		int nom = 0;
		for(int i = 0; i < n; i++){
			if(man[i] == true){
				nom ++;
				mannom.push(i);
			}
		}

		if(nom == 1){
			cout << mannom.front()+1 <<endl;
		}else{
			cout << -1 << endl;
		}
	}
	return 0;
}