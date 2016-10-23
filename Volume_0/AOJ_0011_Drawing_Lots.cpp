#include <iostream>
using namespace std;

int main(){
    int w,n,wnum[31];
    for(int i = 0; i <= 30; i++){
        wnum[i] = i;
    }
    cin >> w >> n;
    for(int i = 0; i < n; i++){
        int a,b;
        char comma;
        cin >> a >> comma >> b;
        swap(wnum[a],wnum[b]);
    }
    for(int i = 1; i <= w; i++){
        cout << wnum[i] << endl;
    }
    return 0;
}