#include <iostream>
using namespace std;

int main(){
    int x, N; // a 홀수개가 되면 안됨, b는 c보다 2개 이상 많아야함, 셋 중 사탕 0개 안됨
    int a = 2, b = 3, c = 1, cnt = 0;

    cin >> N;

    x = (N - b - c) / 2; // b와 c의 최솟값을 더하면 4

    for(int i = 1; i <= x; i++){
        a = 2 * i;
        b = 3;

        while(b < N - a){
            c = N - a - b;
            if(b >= c + 2 && c != 0) cnt++;
            b++;
        }
    }

    cout << cnt;
    return 0;
}