#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c) {  // 세 수가 모두 같을 경우
        cout << 10000 + a * 1000;
    } else if(a == b || a == c){  // 두 수가 같을 경우
        cout << 1000 + a * 100;
    } else if(b == c) {
        cout << 1000 + b * 100;
    } else {    // 모두 다른 숫자일 경우
        cout << max(a, max(b,c)) * 100;
    }
}