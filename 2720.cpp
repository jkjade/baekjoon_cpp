#include <iostream>
using namespace std;

int main(){
    int cnt, C;
    cin >> cnt;

    while(cnt--){
        cin >> C;
        cout << C/25 << " " << C%25/10 << " " << C%25%10/5 << " " << C%25%10%5<< endl;
    }
}