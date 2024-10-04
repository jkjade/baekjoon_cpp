#include <iostream>
using namespace std;

int main(){
    int d, T, t;
    cin >> T;

    for(int i = 0; i < T; i++){
        t = 1;
        cin >> d;

        while(d != 1 && t + t*t <= d) t++;
        cout << t-1 << endl;
    }  
}