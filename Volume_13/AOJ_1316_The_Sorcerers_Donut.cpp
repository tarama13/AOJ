#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lcm(int a,int b){   //a,b < 20だしいいよね
        if (a < b){
            swap(a,b);
        }
        int times = a * b;
        int gcd,lcm;
        while(1){
            int n;
            n = a % b;
            if(n == 0){ break;}
            a = b;
            b = n;
        }
        gcd = b;
        lcm = times / gcd;
    return lcm;
}

int main(){
    int h,w;
    while(1){
        cin >> h >> w ;
        if(h == 0 && w == 0){   break;}
        char donut[10][20];
        for(int i=0;i<10;i++){
            for(int j=0;j<20;j++){
                donut[i][j] = 0;
            }
        }
        string code[1600];
        bool much[1600];
        for(int i = 0; i < 1600; i++){
            code[i] = "";
            much[i] = true;
        }   //初期化…

        unsigned int l = lcm(w,h);  //ななめの最大数
        int a = 0;  //strの数を数えます

        for(int i = 0; i < h; i++){
            for(int j =0; j < w; j++){
                cin >> donut[i][j];
            }
        }   //input

        for(int y = 0; y < h; y++){
            for(int x = 0; x < w; x++){
                for(int i = 0; i < h; i++){  //縦列
                    code[a].append(1,donut[(y + i)%h][x]);
                    code[a+1].append(1,donut[h-(y + i)%h-1][x]);
                }
                a += 2;
                for(int j = 0; j < w; j++){  //横列
                    code[a].append(1,donut[y][(x + j)%w]);
                    code[a+1].append(1,donut[y][w-(x+j)%w-1]);//absつけなくても0になりません！
                }
                a += 2;
                for(unsigned int k = 0; k < l; k++){ //ななめ
                    code[a].append(1,donut[(y + k)%h][(x + k)%w]);
                    code[a+1].append(1,donut[(y + k)%h][(l + x - k)%w]);
                    code[a+2].append(1,donut[(l + y - k)%h][(x + k)%w]);
                    code[a+3].append(1,donut[(l + y - k)%h][(l + x - k)%w]);
                }
                a += 4;
            }
        }
        string mag = "";    //a:strの数-1
        sort(code,code+a);//nとn+1を比べます

        for(unsigned int i = 1; i < l; i++){ //2文字目から
            for(int j = a-1; j > 0; j--){    //逆順
                if(much[j] == true && code[j].length() >= i+1 && code[j-1].length() >= i+1){//=を忘れていました
                    //jのi+1文字目とj-1のi+1文字目を比べるよ
                    if(code[j][i] != code[j-1][i]){
                        much[j] = false;
                    }else{
                        mag = code[j];
                        mag.resize(i+1);
                    }
                }
            }
        }
        if(mag == ""){
            cout << "0" << endl;
        }else{
            cout << mag << endl;
        }
    }
    return 0;
}