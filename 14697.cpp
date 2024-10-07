#include <iostream>
using namespace std;

int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    for(int i = 0; i <= n/c; i++){
        for(int j = 0; j <= (n - c*i)/b; j++){
            if((n - c*i - b*j)%a == 0) {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}