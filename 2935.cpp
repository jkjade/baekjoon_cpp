#include <iostream>
using namespace std;

int main(){
    string a, b;
    char op;

    cin >> a >> op >> b;

    switch(op){
        case '*':
            cout << "1";
            for(int i = 0; i < a.length() + b.length() - 2; i++) cout << "0";
            break;
        case '+':
            if(a.length() > b.length()) {
                a[a.length() - b.length()] = '1';
                cout << a;
            }
            else if(b.length() > a.length()) {
                b[b.length() - a.length()] = '1';
                cout << b;
            }
            else if(a.length() == b.length()){
                a[0] = '2';
                cout << a;
            }
            break;
        default:
            break;
    }

}