#include <iostream>
using namespace std;

int main(){
    int N, M, i, j, n, tmp;
    cin >> N >> M;
    int output[N];

    for(n = 0; n < N; n++) output[n] = n+1;
    
    for(n = 0; n < M; n++){
        cin >> i >> j;
        tmp = output[i-1];
        output[i-1] = output[j-1];
        output[j-1] = tmp;
    }

    for(n = 0; n < N; n++) cout << output[n] << " ";
    
}