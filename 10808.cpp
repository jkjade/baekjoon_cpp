#include <iostream>
using namespace std;

int main() {
    string S;
    int output[26] = {0};
    cin >> S;

    for(int i = 0; i < S.length(); i++){
        for(int j = 0; j < sizeof(output); j++){
            if(S[i] == 'a' + j){
                output[j]++;
                break;
            }
        }
    }
    

    return 0;
}