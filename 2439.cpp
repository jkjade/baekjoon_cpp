#include <iostream>

using namespace std;

int main(){
    int N, i, j, m;
    cin >> N;

    for(i = 1; i <= N; i++){
        for(j = N - i; j > 0; j--) cout << " ";
        for(m = 0; m < i; m++) cout << "*";
        cout << "\n";
    }

    return 0;
}