#include <iostream>
#include <algorithm>
#define MAX_N 1000000
#define L 1000
using namespace std;
struct cave{
	int num;
	int pnum;	//探索した素数洞穴の総数
	int lastp;	//最後に通った素数の値
};

struct cave hole[L+1][L+1];
bool prime[MAX_N+1];

int main(){
	for(int i = 0; i < MAX_N+1; i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;	//prime[1]:1
	for(int i = 2; i <= MAX_N; i++){
		if(prime[i] == true){
			for(int j = 2*i; j < MAX_N; j += i){
				prime[j] = false;
			}
		}
	}	//素数判定
	for(int i = 0; i < L/2; i++){
		for(int j = 0; j < 2*i+1; j++){
			hole[-i-1+L/2][-i+j+L/2-1].num = (2*i+2)*(2*i+2)-j;
			hole[-i-1+j+L/2][i+1+L/2-1].num = (2*i+1)*(2*i+2)+1-j;
			hole[i+L/2][i+1-j+L/2-1].num = (2*i+1)*(2*i+1)+1-j;
			hole[i-j+L/2][-i+L/2-1].num = 2*i*(2*i+1)+1-j;
		}
	}	//mapping
	int m,n;
	while(cin >> m >> n,m){
		int sy = -1,sx = -1;
		for(int i = 0; i < L; i++){
			for(int j = 0; j < L; j++){
				if(hole[i][j].num == n){
					sy = i;
					sx = j;
					break;
				}
				if(sy!=-1&&sx!=-1){break;}
			}
		}
		for(int i = 0; i < L; i++){
			for(int j = 0; j < L; j++){
				hole[i][j].pnum = 0;
				hole[i][j].lastp = 0;
			}
		}	//hole初期化


		if(prime[hole[sy][sx].num] == true){
			hole[sy][sx].pnum = 1;
			hole[sy][sx].lastp = hole[sy][sx].num;
		}
		for(int i = sy+1; i < L; i++){	//syのあった段から下に見ていく
			for(int j = max(0,sx-(i-sy)); j <= min(sx+(i-sy),L-1); j++){
				if(hole[i][j].num <= m){	//洞穴の個数以上の場所は見ない
					int tmp = 0,maxtmp = 0;
					for(int k = -1; k <= 1; k++){
						if(max(0,sx-(i-sy)) <= j+k && j+k <= min(sx+(i-sy),L-1) && maxtmp < hole[i-1][j+k].pnum){
							maxtmp = hole[i-1][j+k].pnum;
							tmp = hole[i-1][j+k].lastp;
						}
					}
					hole[i][j].pnum = maxtmp;
					hole[i][j].lastp = tmp;
					if(prime[hole[i][j].num] == true){
						hole[i][j].pnum ++;
						hole[i][j].lastp = hole[i][j].num;
					}
				}
			}
		}

		int maxtmp = -1;
		int last = 0;
		for(int i = 0; i < L; i++){
			for(int j = 0; j < L; j++){
				if(hole[i][j].num <= m){
					if(hole[i][j].pnum == maxtmp && hole[i][j].lastp > last){
						last = hole[i][j].lastp;
					}else if(hole[i][j].pnum > maxtmp){
						maxtmp = hole[i][j].pnum;
						last = hole[i][j].lastp;
					}
				}
			}
		}
		cout << maxtmp << " " << last << endl;
	}
	return 0;
}